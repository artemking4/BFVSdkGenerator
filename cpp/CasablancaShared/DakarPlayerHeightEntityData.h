// Object: DakarPlayerHeightEntityData
// ClassId: 2578
// RuntimeId: 4801
// TypeInfo: 0x0000000144D503D0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DakarPlayerHeightEntityData : public Entity::EntityData {
        Boolean Enabled; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(DakarPlayerHeightEntityData) == 0x28);
}
#pragma pack(pop)