#!/bin/bash

# run full replay automatically for LHRS
# bash autorepaly_L.sh <runnumber> 

# Shujie Li, Dec 2017


waittime=0
counter=0
#RAWDIR=/adaq1/data1
RAWDIR=/cache/halla/triton/raw/
LOGDIR=t2root/Rootfiles/log
gstart=0   # start from which event
gtotal=-1 # replay how many events, -1 = full replay
ktrue=1
kfalse=0
thisrun=0
    

pc="$(uname -n)"
#if [ $pc == "aonl3.jlab.org" ]; then  # to avoid repeating running
if [ 1 == 1 ]; then
    echo ==========================================
    echo This script will run full replay automatically for LHRS
    echo Works only for recent runs that are stored at /adaq1/data1
    echo **If you want to terminate this program, do ctrl+z, kill % 
    echo ==========================================

    echo
    # to avoid repeating running. the script cannot be detected by pgrep if run with "source" command
    echo "Make sure you run the script with command 'bash':"
    select yn in "Yes" "No"; do
	case $yn in
	    Yes ) break;;
	    No ) exit;;
	esac
    done
    # check if is running already
    for pid in $(pgrep -f "bash autoskim_L.sh"); do 
	if [ $pid != $$ ];then
	    echo !!PID $pid ":Process is already running!!"
	    echo " Do you still want to start a new session?"
	    select yn in "Yes" "No"; do
		case $yn in
		    Yes ) break;;
		    No ) exit;;
		esac
	    done
	fi
    done

    runnum=`cat ~adaq/datafile/rcRunNumberL`
    echo **The current LHRS run number is $runnum
    if [ $# -eq 0 ];then
	echo "which run you want to start with?"
	read thisrun
	echo "which run you want to end at?"
	read runnum
    else
	thisrun=$1 # start from which run
    fi
    while [ $thisrun -gt $runnum ];do
	echo !!!RUN $thisrun does not exists. Please re-enter a smaller number:
	read thisrun
    done
    
    if [ $thisrun -gt 20000 ]; then
	echo "Please enter a LHRS run number!"
	exit
    fi
   # runnum=`cat ~adaq/datafile/rcRunNumberL`
   # echo **The current LHRS run number is $runnum
   # echo "==Will start full replay from run " $thisrun
    

    # Check whether the raw data is ready
    # while [ $waittime -lt 144 ]; do  # if no new datafile for 24 hours, stop
    while [ $thisrun -le $runnum ]; do
	if [ $thisrun -lt $runnum ]; then
	
	    if [[ $(find ${RAWDIR}/triton_${thisrun}.dat.0 -type f -size +10000000c 2>/dev/null) ]]; then  # require rawdata > 10 Mbytes
		echo  ==Found ${RAWDIR}/triton_${thisrun}.dat.0
		if [ -e ${t2root}/skim_${thisrun}.root ]; then
		    rm  ${t2root}/skim_${thisrun}.root
		    rm  ${t2root}/skim_${thisrun}_*.root
		    echo !! will overwrite ${t2root}/skim_${thisrun}.root
		
		else 
		    echo Start analyzing
		    analyzer -q "replay_tritium.C($thisrun,$gtotal,$gstart,$kfalse,$kfalse,$kfalse,$ktrue,$ktrue)"  >> ${LOGDIR}/skim_${thisrun}.log
		    echo RUN skim_${thisrun} is analyzed
		   
		   # running the wiki runlist script to auto add thisrun to the wiki runlist
		  # cd scripts
		 #  ./wiki_runlist $thisrun
		  # analyzer -q -b "sql_update.C($thisrun)" >> ${LOGDIR}/${thisrun}_info.log
		 #  cd ..
		fi
		
	    else 
		echo ${RAWDIR}/triton_${thisrun}.dat.0 less than 10 Mb. Will skip
		echo  ${RAWDIR}/triton_${thisrun}.dat.0 is skipped >> ${LOGDIR}/skim_${thisrun}.log
	    fi
	    waittime=0
	    let thisrun=thisrun+1
	else
	    echo Run ${thisrun} is not completed.  Will check again after 2 minutes.
	    if [ $(($waittime % 5)) -eq 0 ]; then
		echo **If you want to terminate this program, do ctrl+z, kill %
	    fi
	    sleep 2m #wait for 5 minutes
	    waittime=$(($waittime + 1))
	    if [ $waittime -gt 144 ]; then
		echo ====no new datafile in the past 24 hours, STOP========
		exit
	    fi
	fi
#    let counter=counter+1
	#    echo $counter
  #  runnum=`cat ~adaq/datafile/rcRunNumberL`

    done
 
else
    echo !!!Please run this script on aonl3
    exit

fi


