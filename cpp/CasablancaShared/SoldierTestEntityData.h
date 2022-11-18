// Object: SoldierTestEntityData
// ClassId: 3445
// RuntimeId: 61609
// TypeInfo: 0x0000000144D5C060
#include "../Entity/SpatialEntityData.h"
#include "../SoldierShared/SoldierBlueprint.h"
#include "../GameShared/CharacterSpawnTemplateData.h"
#include "../GameShared/VehicleBlueprint.h"
#include "../Global/Boolean.h"
#include "../GameShared/RawFileAsset.h"
#include "../GameShared/TeamId.h"
#include "../Global/Int32.h"
#include "../GameShared/MovementActionData.h"
#include "../GameShared/MovementActionRoot.h"
#include "../Global/CString.h"
#include "../GameShared/InputRecorderData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class SoldierTestEntityData : public Entity::SpatialEntityData {
        SoldierShared::SoldierBlueprint TestSoldier; // 0x60
        GameShared::CharacterSpawnTemplateData Template; // 0x68
        GameShared::VehicleBlueprint TestVehicle; // 0x70
        GameShared::RawFileAsset UnlocksProfile; // 0x78
        GameShared::TeamId Team; // 0x80
        Int32 RandomSeed; // 0x84
        GameShared::MovementActionData StartSequence; // 0x88
        GameShared::MovementActionRoot StartSequenceRoot; // 0x90
        CString CameraMovementsFilename; // 0x98
        GameShared::InputRecorderData InputRecorder; // 0xA0
        Float32 ThrottleInputVal; // 0xA8
        Float32 StrafeInputVal; // 0xAC
        Float32 YawInputVal; // 0xB0
        Float32 PitchInputVal; // 0xB4
        Float32 RollInputVal; // 0xB8
        Float32 FireInputVal; // 0xBC
        Float32 JumpInputVal; // 0xC0
        Float32 ProneInputVal; // 0xC4
        Float32 ZoomInputVal; // 0xC8
        Float32 FireCounterMeasure; // 0xCC
        Float32 ActiveInputRecording; // 0xD0
        Float32 AuthoritativeAimingActive; // 0xD4
        Float32 AuthoritativeYaw; // 0xD8
        Float32 AuthoritativePitch; // 0xDC
        Float32 SpecialAnimationIndex; // 0xE0
        Boolean UseUnlocksProfile; // 0xE4
        Boolean RunAutomatically; // 0xE5
        Boolean SprintInputVal; // 0xE6
        char pad_0xE7[0x9];
    }; // 0xF0
    static_assert(sizeof(SoldierTestEntityData) == 0xF0);
}
#pragma pack(pop)