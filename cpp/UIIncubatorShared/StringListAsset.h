// Object: StringListAsset
// ClassId: 223
// RuntimeId: 19872
// TypeInfo: 0x0000000144F6E640
#include "../UIIncubatorShared/ConfigListAsset.h"
#include "../UIIncubatorShared/StringData.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class StringListAsset : public UIIncubatorShared::ConfigListAsset {
        Array<UIIncubatorShared::StringData> StringTypes; // 0x20
    }; // 0x28
    static_assert(sizeof(StringListAsset) == 0x28);
}
#pragma pack(pop)