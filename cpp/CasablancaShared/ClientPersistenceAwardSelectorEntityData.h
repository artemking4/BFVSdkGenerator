// Object: ClientPersistenceAwardSelectorEntityData
// ClassId: 2489
// RuntimeId: 43756
// TypeInfo: 0x0000000144DA0460
#include "../Entity/EntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ClientPersistenceAwardSelectorEntityData : public Entity::EntityData {
        CString SelectedAwardCriteriaCode; // 0x20
        CString SelectedAwardKeyCode; // 0x28
    }; // 0x30
    static_assert(sizeof(ClientPersistenceAwardSelectorEntityData) == 0x30);
}
#pragma pack(pop)