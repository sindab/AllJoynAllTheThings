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
#pragma once

namespace com { namespace ianlee { namespace FezHat {

ref class FezHatSignals;

public interface class IFezHatSignals
{
    event Windows::Foundation::TypedEventHandler<FezHatSignals^, FezHatButtonDio18PressedReceivedEventArgs^>^ ButtonDio18PressedReceived;
    event Windows::Foundation::TypedEventHandler<FezHatSignals^, FezHatButtonDio22PressedReceivedEventArgs^>^ ButtonDio22PressedReceived;
};

public ref class FezHatSignals sealed : [Windows::Foundation::Metadata::Default] IFezHatSignals
{
public:
    // Calling this method will send the ButtonDio18Pressed signal to every member of the session.
    void ButtonDio18Pressed();

    // This event fires whenever the ButtonDio18Pressed signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<FezHatSignals^, FezHatButtonDio18PressedReceivedEventArgs^>^ ButtonDio18PressedReceived 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<FezHatSignals^, FezHatButtonDio18PressedReceivedEventArgs^>^ handler) 
        { 
            return _ButtonDio18PressedReceived += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<FezHatSignals^>(sender), safe_cast<FezHatButtonDio18PressedReceivedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _ButtonDio18PressedReceived -= token; 
        } 
    internal: 
        void raise(FezHatSignals^ sender, FezHatButtonDio18PressedReceivedEventArgs^ args) 
        { 
            _ButtonDio18PressedReceived(sender, args);
        } 
    }

    // Calling this method will send the ButtonDio22Pressed signal to every member of the session.
    void ButtonDio22Pressed();

    // This event fires whenever the ButtonDio22Pressed signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<FezHatSignals^, FezHatButtonDio22PressedReceivedEventArgs^>^ ButtonDio22PressedReceived 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<FezHatSignals^, FezHatButtonDio22PressedReceivedEventArgs^>^ handler) 
        { 
            return _ButtonDio22PressedReceived += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<FezHatSignals^>(sender), safe_cast<FezHatButtonDio22PressedReceivedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _ButtonDio22PressedReceived -= token; 
        } 
    internal: 
        void raise(FezHatSignals^ sender, FezHatButtonDio22PressedReceivedEventArgs^ args) 
        { 
            _ButtonDio22PressedReceived(sender, args);
        } 
    }

internal:
    void Initialize(_In_ alljoyn_busobject busObject, _In_ alljoyn_sessionid sessionId);
    void CallButtonDio18PressedReceived(_In_ FezHatSignals^ sender, _In_ FezHatButtonDio18PressedReceivedEventArgs^ args);
    void CallButtonDio22PressedReceived(_In_ FezHatSignals^ sender, _In_ FezHatButtonDio22PressedReceivedEventArgs^ args);

private:
    alljoyn_busobject m_busObject;
    alljoyn_sessionid m_sessionId;

    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _ButtonDio18PressedReceived;
    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _ButtonDio22PressedReceived;

    alljoyn_interfacedescription_member m_memberButtonDio18Pressed;
    alljoyn_interfacedescription_member m_memberButtonDio22Pressed;
};

} } } 
