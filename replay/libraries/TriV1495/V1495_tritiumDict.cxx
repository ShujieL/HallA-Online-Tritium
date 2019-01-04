// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME V1495_tritiumDict

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
#include "V1495Module.h"
#include "ClockCountEvtHandler.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_DecodercLcLV1495Module(void *p = 0);
   static void *newArray_DecodercLcLV1495Module(Long_t size, void *p);
   static void delete_DecodercLcLV1495Module(void *p);
   static void deleteArray_DecodercLcLV1495Module(void *p);
   static void destruct_DecodercLcLV1495Module(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Decoder::V1495Module*)
   {
      ::Decoder::V1495Module *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Decoder::V1495Module >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Decoder::V1495Module", ::Decoder::V1495Module::Class_Version(), "V1495Module.h", 15,
                  typeid(::Decoder::V1495Module), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Decoder::V1495Module::Dictionary, isa_proxy, 4,
                  sizeof(::Decoder::V1495Module) );
      instance.SetNew(&new_DecodercLcLV1495Module);
      instance.SetNewArray(&newArray_DecodercLcLV1495Module);
      instance.SetDelete(&delete_DecodercLcLV1495Module);
      instance.SetDeleteArray(&deleteArray_DecodercLcLV1495Module);
      instance.SetDestructor(&destruct_DecodercLcLV1495Module);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Decoder::V1495Module*)
   {
      return GenerateInitInstanceLocal((::Decoder::V1495Module*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Decoder::V1495Module*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ClockCountEvtHandler(void *p);
   static void deleteArray_ClockCountEvtHandler(void *p);
   static void destruct_ClockCountEvtHandler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ClockCountEvtHandler*)
   {
      ::ClockCountEvtHandler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ClockCountEvtHandler >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ClockCountEvtHandler", ::ClockCountEvtHandler::Class_Version(), "ClockCountEvtHandler.h", 19,
                  typeid(::ClockCountEvtHandler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ClockCountEvtHandler::Dictionary, isa_proxy, 4,
                  sizeof(::ClockCountEvtHandler) );
      instance.SetDelete(&delete_ClockCountEvtHandler);
      instance.SetDeleteArray(&deleteArray_ClockCountEvtHandler);
      instance.SetDestructor(&destruct_ClockCountEvtHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ClockCountEvtHandler*)
   {
      return GenerateInitInstanceLocal((::ClockCountEvtHandler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ClockCountEvtHandler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace Decoder {
//______________________________________________________________________________
atomic_TClass_ptr V1495Module::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *V1495Module::Class_Name()
{
   return "Decoder::V1495Module";
}

//______________________________________________________________________________
const char *V1495Module::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::V1495Module*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int V1495Module::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::V1495Module*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *V1495Module::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::V1495Module*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *V1495Module::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::V1495Module*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace Decoder
//______________________________________________________________________________
atomic_TClass_ptr ClockCountEvtHandler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ClockCountEvtHandler::Class_Name()
{
   return "ClockCountEvtHandler";
}

//______________________________________________________________________________
const char *ClockCountEvtHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ClockCountEvtHandler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ClockCountEvtHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ClockCountEvtHandler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ClockCountEvtHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ClockCountEvtHandler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ClockCountEvtHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ClockCountEvtHandler*)0x0)->GetClass(); }
   return fgIsA;
}

namespace Decoder {
//______________________________________________________________________________
void V1495Module::Streamer(TBuffer &R__b)
{
   // Stream an object of class Decoder::V1495Module.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Decoder::V1495Module::Class(),this);
   } else {
      R__b.WriteClassBuffer(Decoder::V1495Module::Class(),this);
   }
}

} // namespace Decoder
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecodercLcLV1495Module(void *p) {
      return  p ? new(p) ::Decoder::V1495Module : new ::Decoder::V1495Module;
   }
   static void *newArray_DecodercLcLV1495Module(Long_t nElements, void *p) {
      return p ? new(p) ::Decoder::V1495Module[nElements] : new ::Decoder::V1495Module[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecodercLcLV1495Module(void *p) {
      delete ((::Decoder::V1495Module*)p);
   }
   static void deleteArray_DecodercLcLV1495Module(void *p) {
      delete [] ((::Decoder::V1495Module*)p);
   }
   static void destruct_DecodercLcLV1495Module(void *p) {
      typedef ::Decoder::V1495Module current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Decoder::V1495Module

//______________________________________________________________________________
void ClockCountEvtHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class ClockCountEvtHandler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ClockCountEvtHandler::Class(),this);
   } else {
      R__b.WriteClassBuffer(ClockCountEvtHandler::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ClockCountEvtHandler(void *p) {
      delete ((::ClockCountEvtHandler*)p);
   }
   static void deleteArray_ClockCountEvtHandler(void *p) {
      delete [] ((::ClockCountEvtHandler*)p);
   }
   static void destruct_ClockCountEvtHandler(void *p) {
      typedef ::ClockCountEvtHandler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ClockCountEvtHandler

namespace {
  void TriggerDictionaryInitialization_V1495_tritiumDict_Impl() {
    static const char* headers[] = {
"V1495Module.h",
"ClockCountEvtHandler.h",
0
    };
    static const char* includePaths[] = {
"/u/apps/root/6.12.06/root/include",
"/home/shujie/tool/analyzer/analyzer-official//src",
"/home/shujie/tool/analyzer/analyzer-official//hana_decode",
"/home/shujie/analyzer/tritium-official/replay/libraries/TriV1495",
"/u/apps/root/6.12.06/root/include",
"/home/shujie/analyzer/tritium-official/replay/libraries/TriV1495/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "V1495_tritiumDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace Decoder{class __attribute__((annotate(R"ATTRDUMP(CAEN V1495 custom Clock Counter)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$V1495Module.h")))  V1495Module;}
class __attribute__((annotate(R"ATTRDUMP(Analyze some TDC data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ClockCountEvtHandler.h")))  ClockCountEvtHandler;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "V1495_tritiumDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef NDEBUG
  #define NDEBUG 1
#endif
#ifndef WITH_DEBUG
  #define WITH_DEBUG 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "V1495Module.h"
#include "ClockCountEvtHandler.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"ClockCountEvtHandler", payloadCode, "@",
"Decoder::V1495Module", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("V1495_tritiumDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_V1495_tritiumDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_V1495_tritiumDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_V1495_tritiumDict() {
  TriggerDictionaryInitialization_V1495_tritiumDict_Impl();
}
