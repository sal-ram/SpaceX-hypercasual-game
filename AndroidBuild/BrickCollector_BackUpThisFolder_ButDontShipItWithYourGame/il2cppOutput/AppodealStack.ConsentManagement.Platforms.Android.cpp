#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent
struct AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC;
// AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManagerException
struct AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks
struct ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB;
// AppodealStack.ConsentManagement.Platforms.Android.ConsentInfoUpdateCallbacks
struct ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// AppodealStack.ConsentManagement.Common.IConsent
struct IConsent_t2CACE48343EC415708492EA53D1AE3E0DB4A75E0;
// AppodealStack.ConsentManagement.Common.IConsentFormListener
struct IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034;
// AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener
struct IConsentInfoUpdateListener_t45CA6ADBDF227E602391658872C9493163C47C67;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConsentInfoUpdateListener_t45CA6ADBDF227E602391658872C9493163C47C67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral80A4A9B5AC5F2DD1275727E79AF411332396C2ED;
IL2CPP_EXTERN_C String_t* _stringLiteral831E35F4C37C6166A3836B738CFDF8B769E60598;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t04CC3B17AC24D8AA54F78F1DA7F326746E19BB45 
{
};

// AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent
struct AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent::_consent
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____consent_0;
	// AppodealStack.ConsentManagement.Common.IConsent AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent::<NativeConsent>k__BackingField
	RuntimeObject* ___U3CNativeConsentU3Ek__BackingField_1;
};

// AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManagerException
struct AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManagerException::_consentManagerException
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____consentManagerException_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

// AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks
struct ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// AppodealStack.ConsentManagement.Common.IConsentFormListener AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks::_listener
	RuntimeObject* ____listener_4;
};

// AppodealStack.ConsentManagement.Platforms.Android.ConsentInfoUpdateCallbacks
struct ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener AppodealStack.ConsentManagement.Platforms.Android.ConsentInfoUpdateCallbacks::_listener
	RuntimeObject* ____listener_4;
};

// <Module>

// <Module>

// AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent

// AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent

// AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManagerException

// AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManagerException

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Void

// System.Void

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.AndroidJavaProxy

// AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks

// AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks

// AppodealStack.ConsentManagement.Platforms.Android.ConsentInfoUpdateCallbacks

// AppodealStack.ConsentManagement.Platforms.Android.ConsentInfoUpdateCallbacks
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) ;
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManagerException::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidConsentManagerException__ctor_mF02DFE87AFF87164F6092860A7A4C8016CACF0DA (AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_androidJavaObject, const RuntimeMethod* method) ;
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidConsent__ctor_mEB9974AAF9D04EFCEAFFF39FCE37001EDBB1E2B8 (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_joConsent, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidConsent__ctor_mEB9974AAF9D04EFCEAFFF39FCE37001EDBB1E2B8 (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_joConsent, const RuntimeMethod* method) 
{
	{
		// public AndroidConsent(AndroidJavaObject joConsent)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _consent = joConsent;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_joConsent;
		__this->____consent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____consent_0), (void*)L_0);
		// NativeConsent = this;
		__this->___U3CNativeConsentU3Ek__BackingField_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNativeConsentU3Ek__BackingField_1), (void*)__this);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManagerException::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidConsentManagerException__ctor_mF02DFE87AFF87164F6092860A7A4C8016CACF0DA (AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_androidJavaObject, const RuntimeMethod* method) 
{
	{
		// public AndroidConsentManagerException(AndroidJavaObject androidJavaObject)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _consentManagerException = androidJavaObject;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_androidJavaObject;
		__this->____consentManagerException_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____consentManagerException_0), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks::.ctor(AppodealStack.ConsentManagement.Common.IConsentFormListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormCallbacks__ctor_m462F91001EFA1A5B6474B5EF435D67BCDEFF17C3 (ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral831E35F4C37C6166A3836B738CFDF8B769E60598);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConsentFormCallbacks(IConsentFormListener listener) : base("com.appodeal.consent.IConsentFormListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral831E35F4C37C6166A3836B738CFDF8B769E60598, NULL);
		// _listener = listener;
		RuntimeObject* L_0 = ___0_listener;
		__this->____listener_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listener_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks::onConsentFormLoaded(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormCallbacks_onConsentFormLoaded_mE4D74D4A2C703183AE71CBE6345F8FC1BFF029F7 (ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_consentForm, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnConsentFormLoaded();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void AppodealStack.ConsentManagement.Common.IConsentFormListener::OnConsentFormLoaded() */, IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks::onConsentFormError(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormCallbacks_onConsentFormError_m7B02D1071FBA82601287D311BAFD88F94499287E (ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnConsentFormError(new AndroidConsentManagerException(exception));
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___0_exception;
		AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55* L_3 = (AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55*)il2cpp_codegen_object_new(AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidConsentManagerException__ctor_mF02DFE87AFF87164F6092860A7A4C8016CACF0DA(L_3, L_2, NULL);
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void AppodealStack.ConsentManagement.Common.IConsentFormListener::OnConsentFormError(AppodealStack.ConsentManagement.Common.IConsentManagerException) */, IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var, G_B2_0, L_3);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks::onConsentFormOpened()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormCallbacks_onConsentFormOpened_m6327B88E18EC17A4CCAEBC77656701477F5E8B3B (ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnConsentFormOpened();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void AppodealStack.ConsentManagement.Common.IConsentFormListener::OnConsentFormOpened() */, IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks::onConsentFormClosed(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormCallbacks_onConsentFormClosed_mDA770CC23D74B20214571229BAD4BC42507616AC (ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_consent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnConsentFormClosed(new AndroidConsent(consent));
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___0_consent;
		AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* L_3 = (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC*)il2cpp_codegen_object_new(AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidConsent__ctor_mEB9974AAF9D04EFCEAFFF39FCE37001EDBB1E2B8(L_3, L_2, NULL);
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3 /* System.Void AppodealStack.ConsentManagement.Common.IConsentFormListener::OnConsentFormClosed(AppodealStack.ConsentManagement.Common.IConsent) */, IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var, G_B2_0, L_3);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentInfoUpdateCallbacks::.ctor(AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInfoUpdateCallbacks__ctor_m5B89FBAABF7DD2F969935D5A625B4F60AF5DDB5A (ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80A4A9B5AC5F2DD1275727E79AF411332396C2ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConsentInfoUpdateCallbacks(IConsentInfoUpdateListener listener) : base("com.appodeal.consent.IConsentInfoUpdateListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral80A4A9B5AC5F2DD1275727E79AF411332396C2ED, NULL);
		// _listener = listener;
		RuntimeObject* L_0 = ___0_listener;
		__this->____listener_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listener_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentInfoUpdateCallbacks::onConsentInfoUpdated(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInfoUpdateCallbacks_onConsentInfoUpdated_mD49AE705A375C281279BB9AF1F6B33E0372925E9 (ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_consent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentInfoUpdateListener_t45CA6ADBDF227E602391658872C9493163C47C67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnConsentInfoUpdated(new AndroidConsent(consent));
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___0_consent;
		AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* L_3 = (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC*)il2cpp_codegen_object_new(AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidConsent__ctor_mEB9974AAF9D04EFCEAFFF39FCE37001EDBB1E2B8(L_3, L_2, NULL);
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener::OnConsentInfoUpdated(AppodealStack.ConsentManagement.Common.IConsent) */, IConsentInfoUpdateListener_t45CA6ADBDF227E602391658872C9493163C47C67_il2cpp_TypeInfo_var, G_B2_0, L_3);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentInfoUpdateCallbacks::onFailedToUpdateConsentInfo(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInfoUpdateCallbacks_onFailedToUpdateConsentInfo_m1115B50A14622CD1389ABFF67207BFC7525CC794 (ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentInfoUpdateListener_t45CA6ADBDF227E602391658872C9493163C47C67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnFailedToUpdateConsentInfo(new AndroidConsentManagerException(error));
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___0_error;
		AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55* L_3 = (AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55*)il2cpp_codegen_object_new(AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidConsentManagerException__ctor_mF02DFE87AFF87164F6092860A7A4C8016CACF0DA(L_3, L_2, NULL);
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener::OnFailedToUpdateConsentInfo(AppodealStack.ConsentManagement.Common.IConsentManagerException) */, IConsentInfoUpdateListener_t45CA6ADBDF227E602391658872C9493163C47C67_il2cpp_TypeInfo_var, G_B2_0, L_3);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
