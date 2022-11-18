// Object: WatergateEntityData
// ClassId: 3909
// RuntimeId: 12106
// TypeInfo: 0x0000000144D12680
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/WatergateInput.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WatergateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CasablancaShared::WatergateInput> Input; // 0x28
        Boolean Default; // 0x30
        Boolean IsOpen; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(WatergateEntityData) == 0x38);
}
#pragma pack(pop)