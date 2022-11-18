// Object: UITeamControlEntityData
// ClassId: 3778
// RuntimeId: 28276
// TypeInfo: 0x0000000144D417D0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UITeamControlEntityData : public Entity::EntityData {
        Boolean Enabled; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(UITeamControlEntityData) == 0x28);
}
#pragma pack(pop)