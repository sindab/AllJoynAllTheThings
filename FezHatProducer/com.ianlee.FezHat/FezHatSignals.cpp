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

using namespace Microsoft::WRL;
using namespace Platform;
using namespace Windows::Devices::AllJoyn;
using namespace Windows::Foundation;
using namespace com::ianlee::FezHat;

void FezHatSignals::Initialize(_In_ alljoyn_busobject busObject, _In_ alljoyn_sessionid sessionId)
{
    m_busObject = busObject;
    m_sessionId = sessionId;

    auto interfaceDefinition = alljoyn_busattachment_getinterface(alljoyn_busobject_getbusattachment(busObject), "com.ianlee.FezHat");
    alljoyn_interfacedescription_getmember(interfaceDefinition, "ButtonDio18Pressed", &m_memberButtonDio18Pressed);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "ButtonDio22Pressed", &m_memberButtonDio22Pressed);
}

void FezHatSignals::ButtonDio18Pressed()
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 0;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberButtonDio18Pressed,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void FezHatSignals::CallButtonDio18PressedReceived(_In_ FezHatSignals^ sender, _In_ FezHatButtonDio18PressedReceivedEventArgs^ args)
{
    ButtonDio18PressedReceived(sender, args);
}

void FezHatSignals::ButtonDio22Pressed()
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 0;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberButtonDio22Pressed,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void FezHatSignals::CallButtonDio22PressedReceived(_In_ FezHatSignals^ sender, _In_ FezHatButtonDio22PressedReceivedEventArgs^ args)
{
    ButtonDio22PressedReceived(sender, args);
}

