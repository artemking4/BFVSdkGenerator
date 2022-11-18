// Object: UISquadboardDataProviderEntityData
// ClassId: 3774
// RuntimeId: 13192
// TypeInfo: 0x0000000144D440D0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISquadboardDataProviderEntityData : public Entity::EntityData {
        Boolean EnableUpdates; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(UISquadboardDataProviderEntityData) == 0x28);
}
#pragma pack(pop)