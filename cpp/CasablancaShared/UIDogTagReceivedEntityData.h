// Object: UIDogTagReceivedEntityData
// ClassId: 2848
// RuntimeId: 57271
// TypeInfo: 0x0000000144D20CF0
#include "../UIIncubatorShared/LocalizedStringEntityBaseData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDogTagReceivedEntityData : public UIIncubatorShared::LocalizedStringEntityBaseData {
        Core::Realm Realm; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UIDogTagReceivedEntityData) == 0x38);
}
#pragma pack(pop)