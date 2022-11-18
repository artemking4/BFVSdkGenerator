// Object: AreaQueryEntityData
// ClassId: 2061
// RuntimeId: 5184
// TypeInfo: 0x0000000144E769C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class AreaQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform GeometryTransform; // 0x30
        Float32 Radius; // 0x70
        Boolean Enabled; // 0x74
        Boolean UseCharacterEntity; // 0x75
        Boolean UseRadiusWithGeometryTransform; // 0x76
        Boolean QueryUsingExtraPlayerInDoublePlayerEvent; // 0x77
        Boolean OnlyQueryIfOnDifferentTeams; // 0x78
        char pad_0x79[0x7];
    }; // 0x80
    static_assert(sizeof(AreaQueryEntityData) == 0x80);
}
#pragma pack(pop)