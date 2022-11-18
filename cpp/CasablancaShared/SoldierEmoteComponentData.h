// Object: SoldierEmoteComponentData
// ClassId: 1839
// RuntimeId: 48055
// TypeInfo: 0x0000000144D5D3E0
#include "../Entity/GameComponentData.h"
#include "../CasablancaShared/SoldierEmoteBinding.h"
#include "../CasablancaShared/SoldierEmoteNetworkedMessageMapping.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class SoldierEmoteComponentData : public Entity::GameComponentData {
        CasablancaShared::SoldierEmoteBinding Binding; // 0x80
        Array<CasablancaShared::SoldierEmoteNetworkedMessageMapping> NetworkedMessageMappings; // 0x1C0
        char pad_0x1C8[0x8];
    }; // 0x1D0
    static_assert(sizeof(SoldierEmoteComponentData) == 0x1D0);
}
#pragma pack(pop)