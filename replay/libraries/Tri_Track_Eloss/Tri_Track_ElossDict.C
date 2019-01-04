// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME Tri_Track_ElossDict

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
#include "Tri_Track_Eloss.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_Tri_Track_Eloss(void *p);
   static void deleteArray_Tri_Track_Eloss(void *p);
   static void destruct_Tri_Track_Eloss(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Tri_Track_Eloss*)
   {
      ::Tri_Track_Eloss *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Tri_Track_Eloss >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Tri_Track_Eloss", ::Tri_Track_Eloss::Class_Version(), "Tri_Track_Eloss.h", 13,
                  typeid(::Tri_Track_Eloss), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Tri_Track_Eloss::Dictionary, isa_proxy, 4,
                  sizeof(::Tri_Track_Eloss) );
      instance.SetDelete(&delete_Tri_Track_Eloss);
      instance.SetDeleteArray(&deleteArray_Tri_Track_Eloss);
      instance.SetDestructor(&destruct_Tri_Track_Eloss);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Tri_Track_Eloss*)
   {
      return GenerateInitInstanceLocal((::Tri_Track_Eloss*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Tri_Track_Eloss*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Tri_Track_Eloss::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Tri_Track_Eloss::Class_Name()
{
   return "Tri_Track_Eloss";
}

//______________________________________________________________________________
const char *Tri_Track_Eloss::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Tri_Track_Eloss*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Tri_Track_Eloss::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Tri_Track_Eloss*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Tri_Track_Eloss::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Tri_Track_Eloss*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Tri_Track_Eloss::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Tri_Track_Eloss*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Tri_Track_Eloss::Streamer(TBuffer &R__b)
{
   // Stream an object of class Tri_Track_Eloss.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Tri_Track_Eloss::Class(),this);
   } else {
      R__b.WriteClassBuffer(Tri_Track_Eloss::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Tri_Track_Eloss(void *p) {
      delete ((::Tri_Track_Eloss*)p);
   }
   static void deleteArray_Tri_Track_Eloss(void *p) {
      delete [] ((::Tri_Track_Eloss*)p);
   }
   static void destruct_Tri_Track_Eloss(void *p) {
      typedef ::Tri_Track_Eloss current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Tri_Track_Eloss

namespace {
  void TriggerDictionaryInitialization_Tri_Track_ElossDict_Impl() {
    static const char* headers[] = {
"Tri_Track_Eloss.h",
0
    };
    static const char* includePaths[] = {
"/u/apps/root/6.12.06/root/include",
"/home/shujie/tool/analyzer/analyzer-official//src",
"/home/shujie/tool/analyzer/analyzer-official//hana_decode",
"/home/shujie/analyzer/tritium-official/replay/libraries/Tri_Track_Eloss",
"/u/apps/root/6.12.06/root/include",
"/home/shujie/analyzer/tritium-official/replay/libraries/Tri_Track_Eloss/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "Tri_Track_ElossDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Track energy loss correction module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Tri_Track_Eloss.h")))  Tri_Track_Eloss;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "Tri_Track_ElossDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef _GLIBCXX_USE_CXX11_ABI
  #define _GLIBCXX_USE_CXX11_ABI 0
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Tri_Track_Eloss.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Tri_Track_Eloss", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("Tri_Track_ElossDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_Tri_Track_ElossDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_Tri_Track_ElossDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_Tri_Track_ElossDict() {
  TriggerDictionaryInitialization_Tri_Track_ElossDict_Impl();
}
