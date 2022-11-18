// Object: UISingleplayerDebugMenuProviderEntityData
// ClassId: 3766
// RuntimeId: 50558
// TypeInfo: 0x0000000144D205F0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISingleplayerDebugMenuProviderEntityData : public Entity::EntityData {
        CString StartPoint; // 0x20
    }; // 0x28
    static_assert(sizeof(UISingleplayerDebugMenuProviderEntityData) == 0x28);
}
#pragma pack(pop)