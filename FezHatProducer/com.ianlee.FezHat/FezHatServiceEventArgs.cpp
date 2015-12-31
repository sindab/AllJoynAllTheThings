//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#include "pch.h"

using namespace concurrency;
using namespace Microsoft::WRL;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Devices::AllJoyn;
using namespace com::ianlee::FezHat;
namespace com { namespace ianlee { namespace FezHat {

// Methods
FezHatSetRedLedStateCalledEventArgs::FezHatSetRedLedStateCalledEventArgs(
    _In_ AllJoynMessageInfo^ info,
    _In_ bool interfaceMemberOn)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info),
    m_interfaceMemberOn(interfaceMemberOn)
{
	m_result = FezHatSetRedLedStateResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ FezHatSetRedLedStateCalledEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &FezHatSetRedLedStateCalledEventArgs::Complete);
    return ref new Deferral(handler);
}

void FezHatSetRedLedStateCalledEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void FezHatSetRedLedStateCalledEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void FezHatSetRedLedStateCalledEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for SetRedLedStateCalled.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

FezHatGetRedLedStateCalledEventArgs::FezHatGetRedLedStateCalledEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = FezHatGetRedLedStateResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ FezHatGetRedLedStateCalledEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &FezHatGetRedLedStateCalledEventArgs::Complete);
    return ref new Deferral(handler);
}

void FezHatGetRedLedStateCalledEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void FezHatGetRedLedStateCalledEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void FezHatGetRedLedStateCalledEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for GetRedLedStateCalled.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

FezHatSetRgbLedD2ColorCalledEventArgs::FezHatSetRgbLedD2ColorCalledEventArgs(
    _In_ AllJoynMessageInfo^ info,
    _In_ bool interfaceMemberOn,
    _In_ byte interfaceMemberRed,
    _In_ byte interfaceMemberGreen,
    _In_ byte interfaceMemberBlue)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info),
    m_interfaceMemberOn(interfaceMemberOn),
    m_interfaceMemberRed(interfaceMemberRed),
    m_interfaceMemberGreen(interfaceMemberGreen),
    m_interfaceMemberBlue(interfaceMemberBlue)
{
	m_result = FezHatSetRgbLedD2ColorResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ FezHatSetRgbLedD2ColorCalledEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &FezHatSetRgbLedD2ColorCalledEventArgs::Complete);
    return ref new Deferral(handler);
}

void FezHatSetRgbLedD2ColorCalledEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void FezHatSetRgbLedD2ColorCalledEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void FezHatSetRgbLedD2ColorCalledEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for SetRgbLedD2ColorCalled.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

FezHatSetRgbLedD3ColorCalledEventArgs::FezHatSetRgbLedD3ColorCalledEventArgs(
    _In_ AllJoynMessageInfo^ info,
    _In_ bool interfaceMemberOn,
    _In_ byte interfaceMemberRed,
    _In_ byte interfaceMemberGreen,
    _In_ byte interfaceMemberBlue)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info),
    m_interfaceMemberOn(interfaceMemberOn),
    m_interfaceMemberRed(interfaceMemberRed),
    m_interfaceMemberGreen(interfaceMemberGreen),
    m_interfaceMemberBlue(interfaceMemberBlue)
{
	m_result = FezHatSetRgbLedD3ColorResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ FezHatSetRgbLedD3ColorCalledEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &FezHatSetRgbLedD3ColorCalledEventArgs::Complete);
    return ref new Deferral(handler);
}

void FezHatSetRgbLedD3ColorCalledEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void FezHatSetRgbLedD3ColorCalledEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void FezHatSetRgbLedD3ColorCalledEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for SetRgbLedD3ColorCalled.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

FezHatGetLightSensorValueCalledEventArgs::FezHatGetLightSensorValueCalledEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = FezHatGetLightSensorValueResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ FezHatGetLightSensorValueCalledEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &FezHatGetLightSensorValueCalledEventArgs::Complete);
    return ref new Deferral(handler);
}

void FezHatGetLightSensorValueCalledEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void FezHatGetLightSensorValueCalledEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void FezHatGetLightSensorValueCalledEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for GetLightSensorValueCalled.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

FezHatGetTemperatureSensorValueCalledEventArgs::FezHatGetTemperatureSensorValueCalledEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = FezHatGetTemperatureSensorValueResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ FezHatGetTemperatureSensorValueCalledEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &FezHatGetTemperatureSensorValueCalledEventArgs::Complete);
    return ref new Deferral(handler);
}

void FezHatGetTemperatureSensorValueCalledEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void FezHatGetTemperatureSensorValueCalledEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void FezHatGetTemperatureSensorValueCalledEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for GetTemperatureSensorValueCalled.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

// Readable Properties
// Writable Properties
} } } 