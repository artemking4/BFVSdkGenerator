// Object: WSPrintDebugTextEntityData
// ClassId: 3900
// RuntimeId: 27021
// TypeInfo: 0x0000000144D654F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../CasablancaShared/PrintDebugTextInput.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WSPrintDebugTextEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString Owner; // 0x28
        CString EntityName; // 0x30
        CString SubName; // 0x38
        Array<CasablancaShared::PrintDebugTextInput> Events; // 0x40
        Boolean ShowOnScreen; // 0x48
        Boolean PrintAsStream; // 0x49
        char pad_0x4A[0x6];
    }; // 0x50
    static_assert(sizeof(WSPrintDebugTextEntityData) == 0x50);
}
#pragma pack(pop)