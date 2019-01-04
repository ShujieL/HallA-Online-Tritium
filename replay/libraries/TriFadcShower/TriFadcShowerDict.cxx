// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TriFadcShowerDict

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
#include "TriFadcShower.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TriFadcShower(void *p = 0);
   static void *newArray_TriFadcShower(Long_t size, void *p);
   static void delete_TriFadcShower(void *p);
   static void deleteArray_TriFadcShower(void *p);
   static void destruct_TriFadcShower(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TriFadcShower*)
   {
      ::TriFadcShower *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TriFadcShower >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TriFadcShower", ::TriFadcShower::Class_Version(), "TriFadcShower.h", 16,
                  typeid(::TriFadcShower), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TriFadcShower::Dictionary, isa_proxy, 4,
                  sizeof(::TriFadcShower) );
      instance.SetNew(&new_TriFadcShower);
      instance.SetNewArray(&newArray_TriFadcShower);
      instance.SetDelete(&delete_TriFadcShower);
      instance.SetDeleteArray(&deleteArray_TriFadcShower);
      instance.SetDestructor(&destruct_TriFadcShower);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TriFadcShower*)
   {
      return GenerateInitInstanceLocal((::TriFadcShower*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TriFadcShower*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TriFadcShower::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TriFadcShower::Class_Name()
{
   return "TriFadcShower";
}

//______________________________________________________________________________
const char *TriFadcShower::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriFadcShower*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TriFadcShower::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriFadcShower*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TriFadcShower::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriFadcShower*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TriFadcShower::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriFadcShower*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TriFadcShower::Streamer(TBuffer &R__b)
{
   // Stream an object of class TriFadcShower.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TriFadcShower::Class(),this);
   } else {
      R__b.WriteClassBuffer(TriFadcShower::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TriFadcShower(void *p) {
      return  p ? new(p) ::TriFadcShower : new ::TriFadcShower;
   }
   static void *newArray_TriFadcShower(Long_t nElements, void *p) {
      return p ? new(p) ::TriFadcShower[nElements] : new ::TriFadcShower[nElements];
   }
   // Wrapper around operator delete
   static void delete_TriFadcShower(void *p) {
      delete ((::TriFadcShower*)p);
   }
   static void deleteArray_TriFadcShower(void *p) {
      delete [] ((::TriFadcShower*)p);
   }
   static void destruct_TriFadcShower(void *p) {
      typedef ::TriFadcShower current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TriFadcShower

namespace {
  void TriggerDictionaryInitialization_TriFadcShowerDict_Impl() {
    static const char* headers[] = {
"TriFadcShower.h",
0
    };
    static const char* includePaths[] = {
"/u/apps/root/6.12.06/root/include",
"/home/shujie/tool/analyzer/analyzer-official//src",
"/home/shujie/tool/analyzer/analyzer-official//hana_decode",
"/home/shujie/analyzer/tritium-official/replay/libraries/TriFadcShower",
"/u/apps/root/6.12.06/root/include",
"/home/shujie/analyzer/tritium-official/replay/libraries/TriFadcShower/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TriFadcShowerDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Generic shower detector class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TriFadcShower.h")))  TriFadcShower;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TriFadcShowerDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef _GLIBCXX_USE_CXX11_ABI
  #define _GLIBCXX_USE_CXX11_ABI 0
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TriFadcShower.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TriFadcShower", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TriFadcShowerDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TriFadcShowerDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TriFadcShowerDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TriFadcShowerDict() {
  TriggerDictionaryInitialization_TriFadcShowerDict_Impl();
}
