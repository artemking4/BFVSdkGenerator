// Object: SyncedTimerEntityData
// ClassId: 3543
// RuntimeId: 44887
// TypeInfo: 0x0000000144DBE7B0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class SyncedTimerEntityData : public Entity::EntityData {
        Float32 MaximumDuration; // 0x20
        Float32 NetworkResolution; // 0x24
        Float32 OutputResolution; // 0x28
        Uint32 MaximumDurationNetworkValue; // 0x2C
        Array<Float32> TimeScaleSettings; // 0x30
        Array<Int32> TimeScaleEventHashes; // 0x38
        Float32 MinimumTimeScale; // 0x40
        Int32 TimeScaleIndex; // 0x44
        Float32 Duration; // 0x48
        Float32 Elapsed; // 0x4C
        Boolean ReplayEventsOnLateJoin; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(SyncedTimerEntityData) == 0x58);
}
#pragma pack(pop)