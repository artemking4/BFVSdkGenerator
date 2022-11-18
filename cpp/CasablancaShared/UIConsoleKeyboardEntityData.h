// Object: UIConsoleKeyboardEntityData
// ClassId: 3620
// RuntimeId: 21835
// TypeInfo: 0x0000000144D1FDF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/UIConsoleKeyboardCharacterType.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIConsoleKeyboardEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 MaxTextLength; // 0x24
        CasablancaShared::UIConsoleKeyboardCharacterType CharacterType; // 0x28
        char pad_0x2C[0x4];
        CString DefaultText; // 0x30
        CString Title; // 0x38
        CString Desc; // 0x40
    }; // 0x48
    static_assert(sizeof(UIConsoleKeyboardEntityData) == 0x48);
}
#pragma pack(pop)