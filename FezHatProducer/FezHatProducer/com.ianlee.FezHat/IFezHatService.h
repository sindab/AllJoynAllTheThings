//-----------------------------------------------------------------------------
// <auto-generated>
//   This code was generated by a tool.
//
//   Changes to this file may cause incorrect behavior and will be lost if
//   the code is regenerated.
//
//   For more information, see: http://go.microsoft.com/fwlink/?LinkID=623246
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace com { namespace ianlee { namespace FezHat {

public interface class IFezHatService
{
public:
    // Implement this function to handle calls to the SetRedLedState method.
    Windows::Foundation::IAsyncOperation<FezHatSetRedLedStateResult^>^ SetRedLedStateAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ bool interfaceMemberOn);

    // Implement this function to handle calls to the GetRedLedState method.
    Windows::Foundation::IAsyncOperation<FezHatGetRedLedStateResult^>^ GetRedLedStateAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info );

    // Implement this function to handle calls to the SetRgbLedD2Color method.
    Windows::Foundation::IAsyncOperation<FezHatSetRgbLedD2ColorResult^>^ SetRgbLedD2ColorAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ bool interfaceMemberOn, _In_ byte interfaceMemberRed, _In_ byte interfaceMemberGreen, _In_ byte interfaceMemberBlue);

    // Implement this function to handle calls to the SetRgbLedD3Color method.
    Windows::Foundation::IAsyncOperation<FezHatSetRgbLedD3ColorResult^>^ SetRgbLedD3ColorAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ bool interfaceMemberOn, _In_ byte interfaceMemberRed, _In_ byte interfaceMemberGreen, _In_ byte interfaceMemberBlue);

    // Implement this function to handle calls to the GetLightSensorValue method.
    Windows::Foundation::IAsyncOperation<FezHatGetLightSensorValueResult^>^ GetLightSensorValueAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info );

    // Implement this function to handle calls to the GetTemperatureSensorValue method.
    Windows::Foundation::IAsyncOperation<FezHatGetTemperatureSensorValueResult^>^ GetTemperatureSensorValueAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info );

};

} } } 