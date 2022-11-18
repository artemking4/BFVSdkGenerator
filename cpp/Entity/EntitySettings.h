// Object: EntitySettings
// ClassId: 4984
// RuntimeId: 26287
// TypeInfo: 0x0000000144ED5EA0
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Entity/ExecutionModeType.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Entity {
    class EntitySettings : public Core::SystemSettings {
        Entity::ExecutionModeType ExecutionMode; // 0x20
        Int32 AsyncRaycastClientLoggingIntervalFrames; // 0x24
        Int32 AsyncRaycastServerLoggingIntervalFrames; // 0x28
        Uint32 OutOfEntityBusNetworkIdThreshold; // 0x2C
        Float32 WorldLimit; // 0x30
        char pad_0x34[0x4];
        CString GameViewRootObjectType; // 0x38
        Int32 RaycastLoggingIntervalFrames; // 0x40
        Float32 InsaneOcclusionRaycastLength; // 0x44
        Float32 MaxOcclusionRaycastLength; // 0x48
        Boolean EditorGameViewEnable; // 0x4C
        Boolean SpawnSubLevelsFromLogic; // 0x4D
        Boolean LogInsaneOcclusionRaycasts; // 0x4E
        char pad_0x4F[0x1];
    }; // 0x50
    static_assert(sizeof(EntitySettings) == 0x50);
}
#pragma pack(pop)