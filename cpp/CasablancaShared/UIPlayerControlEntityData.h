// Object: UIPlayerControlEntityData
// ClassId: 3750
// RuntimeId: 15715
// TypeInfo: 0x0000000144D86820
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIPlayerControlEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject Player; // 0x20
        Boolean Enabled; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(UIPlayerControlEntityData) == 0x30);
}
#pragma pack(pop)