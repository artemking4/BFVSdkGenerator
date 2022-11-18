// Object: UIStateAsset
// ClassId: 894
// RuntimeId: 52663
// TypeInfo: 0x0000000144F68C60
#include "../Core/Asset.h"
#include "../UIDataKeysShared/UIComponentData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace UIDataKeysShared {
    class UIStateAsset : public Core::Asset {
        Array<UIDataKeysShared::UIComponentData> UIComponents; // 0x20
        CString StateName; // 0x28
        CString StatePath; // 0x30
    }; // 0x38
    static_assert(sizeof(UIStateAsset) == 0x38);
}
#pragma pack(pop)