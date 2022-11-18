// Object: UIActionData
// ClassId: 866
// RuntimeId: 39447
// TypeInfo: 0x0000000144F68D60
#include "../Core/Asset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace UIDataKeysShared {
    class UIActionData : public Core::Asset {
        Array<CString> ActionKeys; // 0x20
    }; // 0x28
    static_assert(sizeof(UIActionData) == 0x28);
}
#pragma pack(pop)