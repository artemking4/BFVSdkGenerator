// Object: MobileSpawnComponentData
// ClassId: 1808
// RuntimeId: 31905
// TypeInfo: 0x0000000144C7D600
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Casablanca/SpawnTransform.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class MobileSpawnComponentData : public Entity::GameComponentData {
        Casablanca::SpawnTransform SpawnType; // 0x80
        Float32 ParachuteSpawnDistance; // 0x84
        Float32 ParachuteSpawnRadiusMin; // 0x88
        Float32 ParachuteSpawnRadiusMax; // 0x8C
        Int32 MaxSpawnCount; // 0x90
        Boolean EnterMobileSpawnPoint; // 0x94
        Boolean ParachuteInstantDeployAtSpawn; // 0x95
        Boolean AllowSquadSpawnOverride; // 0x96
        Boolean SquadSpawnOnly; // 0x97
        Boolean FaceSpawnPointOnSpawn; // 0x98
        Boolean Enabled; // 0x99
        char pad_0x9A[0x6];
    }; // 0xA0
    static_assert(sizeof(MobileSpawnComponentData) == 0xA0);
}
#pragma pack(pop)