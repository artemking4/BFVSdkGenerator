// Object: SpectatorAreaEntityData
// ClassId: 3492
// RuntimeId: 44146
// TypeInfo: 0x0000000144D42650
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SpectatorAreaEntityData : public Entity::EntityData {
        Boolean Enabled; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(SpectatorAreaEntityData) == 0x28);
}
#pragma pack(pop)