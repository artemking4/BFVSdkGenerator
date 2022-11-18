// Object: ChassisComponentData
// ClassId: 1816
// RuntimeId: 28394
// TypeInfo: 0x0000000144E8D5E0
#include "../GameShared/PartComponentData.h"
#include "../GameShared/VehicleConfigData.h"
#include "../GameShared/GearboxConfigData.h"
#include "../GameShared/CameraRelativeControlData.h"
#include "../Global/Boolean.h"
#include "../GameShared/VehicleWaterEffectData.h"
#include "../Global/Float32.h"
#include "../GameShared/LandingGearLogicData.h"
#include "../GameShared/OnImpulseModifierData.h"

#pragma pack(push, 16)
namespace GameShared {
    class ChassisComponentData : public GameShared::PartComponentData {
        GameShared::VehicleConfigData VehicleConfig; // 0xA0
        GameShared::GearboxConfigData GearboxConfig; // 0xA8
        GameShared::CameraRelativeControlData CameraRelativeControlConfig; // 0xB0
        GameShared::CameraRelativeControlData OverrideCameraRelativeControlConfig; // 0xB8
        Array<GameShared::VehicleWaterEffectData> WaterEffects; // 0xC0
        Array<GameShared::VehicleWaterEffectData> WaterStreakEffects; // 0xC8
        Float32 TriggerGroundEffectImpulse; // 0xD0
        Float32 TriggerGroundEffectHeight; // 0xD4
        Float32 GroundEffectFadeParam; // 0xD8
        Float32 GroundEffectParameter2; // 0xDC
        Float32 GroundEffectParameter3; // 0xE0
        char pad_0xE4[0x4];
        GameShared::LandingGearLogicData LandingGearLogic; // 0xE8
        Array<GameShared::OnImpulseModifierData> OnImpulseModifiers; // 0xF0
        Float32 GlobalOnImpulseModifier; // 0xF8
        Boolean AlwaysFullThrottle; // 0xFC
        Boolean GroundEffectOnTerrainOnly; // 0xFD
        Boolean UseAheadOfTime; // 0xFE
        Boolean AllowNegativeThrottle; // 0xFF
    }; // 0x100
    static_assert(sizeof(ChassisComponentData) == 0x100);
}
#pragma pack(pop)