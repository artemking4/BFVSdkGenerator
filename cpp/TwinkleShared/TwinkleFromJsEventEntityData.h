// Object: TwinkleFromJsEventEntityData
// ClassId: 3602
// RuntimeId: 26704
// TypeInfo: 0x0000000144F66F50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../TwinkleShared/TwinkleJsEventParameterDefine.h"

#pragma pack(push, 8)
namespace TwinkleShared {
    class TwinkleFromJsEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString JsMessageType; // 0x28
        CString DDFClassName; // 0x30
        Array<TwinkleShared::TwinkleJsEventParameterDefine> CustomParameterDefines; // 0x38
    }; // 0x40
    static_assert(sizeof(TwinkleFromJsEventEntityData) == 0x40);
}
#pragma pack(pop)