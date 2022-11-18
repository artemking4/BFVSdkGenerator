// Object: WSPropertyDebugEntityData
// ClassId: 3901
// RuntimeId: 28655
// TypeInfo: 0x0000000144D65570
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/PropertyDebugInput.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WSPropertyDebugEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString Owner; // 0x28
        CString EntityName; // 0x30
        CString SubName; // 0x38
        Array<CasablancaShared::PropertyDebugInput> Inputs; // 0x40
        Boolean ShowDataPath; // 0x48
        Boolean ShowOnScreen; // 0x49
        Boolean RuntimeVisible; // 0x4A
        char pad_0x4B[0x5];
    }; // 0x50
    static_assert(sizeof(WSPropertyDebugEntityData) == 0x50);
}
#pragma pack(pop)