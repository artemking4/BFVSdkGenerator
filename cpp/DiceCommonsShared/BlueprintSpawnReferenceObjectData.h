// Object: BlueprintSpawnReferenceObjectData
// ClassId: 3941
// RuntimeId: 18322
// TypeInfo: 0x0000000144DB5D90
#include "../Entity/ReferenceObjectData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class BlueprintSpawnReferenceObjectData : public Entity::ReferenceObjectData {
        Core::Realm Realm; // 0xB0
        Float32 InitialSpawnDelay; // 0xB4
        Float32 SpawnDelay; // 0xB8
        Int32 MaxCount; // 0xBC
        Int32 MaxCountSimultaneously; // 0xC0
        Boolean InitialAutoSpawn; // 0xC4
        Boolean AutoSpawn; // 0xC5
        Boolean QueueSpawnEvent; // 0xC6
        Boolean UseAsSpawnPoint; // 0xC7
        Boolean SpawnsOccupyLocations; // 0xC8
        char pad_0xC9[0x7];
    }; // 0xD0
    static_assert(sizeof(BlueprintSpawnReferenceObjectData) == 0xD0);
}
#pragma pack(pop)