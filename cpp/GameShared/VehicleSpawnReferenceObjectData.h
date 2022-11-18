// Object: VehicleSpawnReferenceObjectData
// ClassId: 3981
// RuntimeId: 61384
// TypeInfo: 0x0000000144E907E0
#include "../GameShared/SpawnReferenceObjectData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/EntryEnterRestriction.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace GameShared {
    class VehicleSpawnReferenceObjectData : public GameShared::SpawnReferenceObjectData {
        Float32 WreckDuration; // 0x1C0
        GameShared::EntryEnterRestriction EnterRestriction; // 0x1C4
        Float32 BotBailWhenHealthBelow; // 0x1C8
        Float32 BotBailOutDelay; // 0x1CC
        Float32 RespawnRange; // 0x1D0
        Float32 TimeUntilAbandoned; // 0x1D4
        Float32 TimeUntilAbandonedIsDestroyed; // 0x1D8
        Float32 KeepAliveRadius; // 0x1DC
        Int32 ActiveStanceEntryIndex; // 0x1E0
        Int32 ActiveStance; // 0x1E4
        Float32 VehicleIsNearDistance; // 0x1E8
        Int32 VehicleType; // 0x1EC
        Boolean SetTeamOnSpawn; // 0x1F0
        Boolean AffectedByImpulse; // 0x1F1
        Boolean AIAllowedToFollowHumanInVehicle; // 0x1F2
        Boolean AIUseExitPoints; // 0x1F3
        Boolean ApplyDamageToAbandonedVehicles; // 0x1F4
        Boolean AbandonVehiclesOutOfCombatArea; // 0x1F5
        Boolean EnableAvailableSeatOutput; // 0x1F6
        Boolean DisregardSpawnAllowedSetting; // 0x1F7
        char pad_0x1F8[0x8];
    }; // 0x200
    static_assert(sizeof(VehicleSpawnReferenceObjectData) == 0x200);
}
#pragma pack(pop)