// Object: FootprintConduitData
// ClassId: 2765
// RuntimeId: 23601
// TypeInfo: 0x0000000144D099B0
#include "../Entity/EntityData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class FootprintConduitData : public Entity::EntityData {
        Core::Vec3 LocationOverride; // 0x20
    }; // 0x30
    static_assert(sizeof(FootprintConduitData) == 0x30);
}
#pragma pack(pop)