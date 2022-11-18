// Object: UIIngameMenuEntityData
// ClassId: 3719
// RuntimeId: 64911
// TypeInfo: 0x0000000144D21670
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIIngameMenuEntityData : public Entity::EntityData {
        Boolean IsPreRoundActive; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(UIIngameMenuEntityData) == 0x28);
}
#pragma pack(pop)