// Object: TerrainHeightEntityData
// ClassId: 3565
// RuntimeId: 34393
// TypeInfo: 0x0000000144D229F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class TerrainHeightEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform WorldTransform; // 0x30
    }; // 0x70
    static_assert(sizeof(TerrainHeightEntityData) == 0x70);
}
#pragma pack(pop)