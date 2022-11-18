// Object: BFUIProfileOptionsManagerEntityData
// ClassId: 2362
// RuntimeId: 29092
// TypeInfo: 0x0000000144D87C20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIProfileOptionsManagerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 KeybindingDevice; // 0x24
        Int32 KeybindingConceptIndex; // 0x28
        char pad_0x2C[0x4];
        CString KeybindingType; // 0x30
        CString PopupTextSid; // 0x38
        CString PopupTitleSid; // 0x40
    }; // 0x48
    static_assert(sizeof(BFUIProfileOptionsManagerEntityData) == 0x48);
}
#pragma pack(pop)