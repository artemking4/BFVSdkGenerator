// Object: SpawnReferenceObjectData
// ClassId: 3976
// RuntimeId: 44067
// TypeInfo: 0x0000000144E90B60
#include "../Entity/SpatialReferenceObjectData.h"
#include "../GameShared/ExtraSpawnData.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../GameShared/TeamId.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace GameShared {
    class SpawnReferenceObjectData : public Entity::SpatialReferenceObjectData {
        Core::LinearTransform ControllableTransform; // 0xC0
        Core::LinearTransform ControllableInput; // 0x100
        Array<GameShared::ExtraSpawnData> ExtraSpawnData; // 0x140
        CString LocationNameSid; // 0x148
        CString LocationTextSid; // 0x150
        GameShared::TeamId Team; // 0x158
        Float32 InitialSpawnDelay; // 0x15C
        Float32 SpawnDelay; // 0x160
        Int32 MaxCount; // 0x164
        Int32 MaxCountSimultaneously; // 0x168
        Int32 TotalCountSimultaneouslyOfType; // 0x16C
        Int32 TotalCountSimultaneouslyOfTypeTeam1; // 0x170
        Int32 TotalCountSimultaneouslyOfTypeTeam2; // 0x174
        Float32 SpawnAreaRadius; // 0x178
        Float32 SpawnProtectionRadius; // 0x17C
        Uint32 SpawnProtectionFriendlyKilledCount; // 0x180
        Float32 SpawnProtectionFriendlyKilledTime; // 0x184
        Float32 SpawnProtectionEnemyLOSDistance; // 0x188
        Float32 SpawnProtectionEnemyRememberTime; // 0x18C
        Int32 TakeControlEntryIndex; // 0x190
        Float32 RotationYaw; // 0x194
        Float32 RotationPitch; // 0x198
        Float32 RotationRoll; // 0x19C
        Float32 Throttle; // 0x1A0
        Int32 MaxSpawnInFrame; // 0x1A4
        Int32 MaxUnspawnInFrame; // 0x1A8
        Boolean Enabled; // 0x1AC
        Boolean LockedTeam; // 0x1AD
        Boolean InitialAutoSpawn; // 0x1AE
        Boolean AutoSpawn; // 0x1AF
        Boolean QueueSpawnEvent; // 0x1B0
        Boolean UseAsSpawnPoint; // 0x1B1
        Boolean SpawnProtectionCheckAllTeams; // 0x1B2
        Boolean ClearBangersOnSpawn; // 0x1B3
        Boolean OnlySendEventForHumanPlayers; // 0x1B4
        Boolean SendWeaponEvents; // 0x1B5
        Boolean TryToSpawnOutOfSight; // 0x1B6
        Boolean TakeControlOnTransformChange; // 0x1B7
        Boolean ReturnControlOnIdle; // 0x1B8
        Boolean IgnoreBelowTerrainTest; // 0x1B9
        char pad_0x1BA[0x6];
    }; // 0x1C0
    static_assert(sizeof(SpawnReferenceObjectData) == 0x1C0);
}
#pragma pack(pop)