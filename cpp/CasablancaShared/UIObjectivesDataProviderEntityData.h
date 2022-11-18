// Object: UIObjectivesDataProviderEntityData
// ClassId: 3745
// RuntimeId: 30276
// TypeInfo: 0x0000000144D88620
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIObjectivesDataProviderEntityData : public Entity::EntityData {
        Boolean EnableUpdates; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(UIObjectivesDataProviderEntityData) == 0x28);
}
#pragma pack(pop)