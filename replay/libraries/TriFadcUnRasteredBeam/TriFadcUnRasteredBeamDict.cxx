// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TriFadcUnRasteredBeamDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "TriFadcUnRasteredBeam.h"
#include "TriFadcBPM.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TriFadcUnRasteredBeam(void *p);
   static void deleteArray_TriFadcUnRasteredBeam(void *p);
   static void destruct_TriFadcUnRasteredBeam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TriFadcUnRasteredBeam*)
   {
      ::TriFadcUnRasteredBeam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TriFadcUnRasteredBeam >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TriFadcUnRasteredBeam", ::TriFadcUnRasteredBeam::Class_Version(), "TriFadcUnRasteredBeam.h", 12,
                  typeid(::TriFadcUnRasteredBeam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TriFadcUnRasteredBeam::Dictionary, isa_proxy, 4,
                  sizeof(::TriFadcUnRasteredBeam) );
      instance.SetDelete(&delete_TriFadcUnRasteredBeam);
      instance.SetDeleteArray(&deleteArray_TriFadcUnRasteredBeam);
      instance.SetDestructor(&destruct_TriFadcUnRasteredBeam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TriFadcUnRasteredBeam*)
   {
      return GenerateInitInstanceLocal((::TriFadcUnRasteredBeam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TriFadcUnRasteredBeam*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TriFadcBPM(void *p);
   static void deleteArray_TriFadcBPM(void *p);
   static void destruct_TriFadcBPM(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TriFadcBPM*)
   {
      ::TriFadcBPM *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TriFadcBPM >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TriFadcBPM", ::TriFadcBPM::Class_Version(), "TriFadcBPM.h", 13,
                  typeid(::TriFadcBPM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TriFadcBPM::Dictionary, isa_proxy, 4,
                  sizeof(::TriFadcBPM) );
      instance.SetDelete(&delete_TriFadcBPM);
      instance.SetDeleteArray(&deleteArray_TriFadcBPM);
      instance.SetDestructor(&destruct_TriFadcBPM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TriFadcBPM*)
   {
      return GenerateInitInstanceLocal((::TriFadcBPM*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TriFadcBPM*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TriFadcUnRasteredBeam::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TriFadcUnRasteredBeam::Class_Name()
{
   return "TriFadcUnRasteredBeam";
}

//______________________________________________________________________________
const char *TriFadcUnRasteredBeam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriFadcUnRasteredBeam*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TriFadcUnRasteredBeam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriFadcUnRasteredBeam*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TriFadcUnRasteredBeam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriFadcUnRasteredBeam*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TriFadcUnRasteredBeam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriFadcUnRasteredBeam*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TriFadcBPM::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TriFadcBPM::Class_Name()
{
   return "TriFadcBPM";
}

//______________________________________________________________________________
const char *TriFadcBPM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriFadcBPM*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TriFadcBPM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriFadcBPM*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TriFadcBPM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriFadcBPM*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TriFadcBPM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriFadcBPM*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TriFadcUnRasteredBeam::Streamer(TBuffer &R__b)
{
   // Stream an object of class TriFadcUnRasteredBeam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TriFadcUnRasteredBeam::Class(),this);
   } else {
      R__b.WriteClassBuffer(TriFadcUnRasteredBeam::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TriFadcUnRasteredBeam(void *p) {
      delete ((::TriFadcUnRasteredBeam*)p);
   }
   static void deleteArray_TriFadcUnRasteredBeam(void *p) {
      delete [] ((::TriFadcUnRasteredBeam*)p);
   }
   static void destruct_TriFadcUnRasteredBeam(void *p) {
      typedef ::TriFadcUnRasteredBeam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TriFadcUnRasteredBeam

//______________________________________________________________________________
void TriFadcBPM::Streamer(TBuffer &R__b)
{
   // Stream an object of class TriFadcBPM.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TriFadcBPM::Class(),this);
   } else {
      R__b.WriteClassBuffer(TriFadcBPM::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TriFadcBPM(void *p) {
      delete ((::TriFadcBPM*)p);
   }
   static void deleteArray_TriFadcBPM(void *p) {
      delete [] ((::TriFadcBPM*)p);
   }
   static void destruct_TriFadcBPM(void *p) {
      typedef ::TriFadcBPM current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TriFadcBPM

namespace {
  void TriggerDictionaryInitialization_TriFadcUnRasteredBeamDict_Impl() {
    static const char* headers[] = {
"TriFadcUnRasteredBeam.h",
"TriFadcBPM.h",
0
    };
    static const char* includePaths[] = {
"/u/apps/root/6.12.06/root/include",
"/home/shujie/tool/analyzer/analyzer-official//src",
"/home/shujie/tool/analyzer/analyzer-official//hana_decode",
"/home/shujie/analyzer/tritium-official/replay/libraries/TriFadcUnRasteredBeam",
"/u/apps/root/6.12.06/root/include",
"/home/shujie/analyzer/tritium-official/replay/libraries/TriFadcUnRasteredBeam/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TriFadcUnRasteredBeamDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(A beam with rastered beam, analyzed event by event using raster currents)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TriFadcUnRasteredBeam.h")))  TriFadcUnRasteredBeam;
class __attribute__((annotate(R"ATTRDUMP(Generic BPM class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TriFadcBPM.h")))  TriFadcBPM;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TriFadcUnRasteredBeamDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef _GLIBCXX_USE_CXX11_ABI
  #define _GLIBCXX_USE_CXX11_ABI 0
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TriFadcUnRasteredBeam.h"
#include "TriFadcBPM.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TriFadcBPM", payloadCode, "@",
"TriFadcUnRasteredBeam", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TriFadcUnRasteredBeamDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TriFadcUnRasteredBeamDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TriFadcUnRasteredBeamDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TriFadcUnRasteredBeamDict() {
  TriggerDictionaryInitialization_TriFadcUnRasteredBeamDict_Impl();
}
