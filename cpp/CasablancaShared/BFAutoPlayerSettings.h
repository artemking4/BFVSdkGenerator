// Object: BFAutoPlayerSettings
// ClassId: 4959
// RuntimeId: 2324
// TypeInfo: 0x0000000144D4CBF0
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFAutoPlayerSettings : public Core::SystemSettings {
        CString SpawnerName; // 0x20
        Int32 VehicleSpawnLimit; // 0x28
        Float32 DakarLootInvalidLocationRadius; // 0x2C
        Float32 DakarLootAvoidEnemyRadius; // 0x30
        Float32 DakarLootCheckAbortEnemyRadius; // 0x34
        Float32 DakarLootCheckAbortEnemyInterval; // 0x38
        Float32 DakarLootAbortEnemyRadius; // 0x3C
        Float32 DakarLootAimTolerance; // 0x40
        Boolean AllowSpawnOverride; // 0x44
        Boolean ForceSpawnOnHuman; // 0x45
        Boolean OpenDoorsForServerPlayersOnRoundStart; // 0x46
        Boolean DakarLootRequireValidNavigationPosition; // 0x47
        Boolean DakarLootAvoidEnemies; // 0x48
        Boolean DakarLootDebugDrawInvalidPositions; // 0x49
        Boolean DakarLootOnlyPickupNeededItemTypes; // 0x4A
        char pad_0x4B[0x5];
    }; // 0x50
    static_assert(sizeof(BFAutoPlayerSettings) == 0x50);
}
#pragma pack(pop)