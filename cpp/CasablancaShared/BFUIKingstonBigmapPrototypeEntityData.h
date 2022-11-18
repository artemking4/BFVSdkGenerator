// Object: BFUIKingstonBigmapPrototypeEntityData
// ClassId: 2288
// RuntimeId: 25217
// TypeInfo: 0x0000000144D97E90
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIKingstonBigmapPrototypeEntityData : public Entity::EntityData {
        Boolean ProjectOnTerrainOnly; // 0x20
        Boolean UseMousePosition; // 0x21
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(BFUIKingstonBigmapPrototypeEntityData) == 0x28);
}
#pragma pack(pop)