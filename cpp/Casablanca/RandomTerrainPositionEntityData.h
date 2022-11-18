// Object: RandomTerrainPositionEntityData
// ClassId: 3097
// RuntimeId: 52150
// TypeInfo: 0x0000000144C326F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Casablanca/RandomTerrainPositionType.h"

#pragma pack(push, 16)
namespace Casablanca {
    class RandomTerrainPositionEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Location; // 0x30
        Float32 Radius; // 0x40
        Casablanca::RandomTerrainPositionType ShapeType; // 0x44
        char pad_0x48[0x8];
    }; // 0x50
    static_assert(sizeof(RandomTerrainPositionEntityData) == 0x50);
}
#pragma pack(pop)