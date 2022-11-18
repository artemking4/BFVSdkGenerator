// Object: Vec3ListAsset
// ClassId: 224
// RuntimeId: 54199
// TypeInfo: 0x0000000144F6E840
#include "../UIIncubatorShared/ConfigListAsset.h"
#include "../UIIncubatorShared/Vec3Data.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class Vec3ListAsset : public UIIncubatorShared::ConfigListAsset {
        Array<UIIncubatorShared::Vec3Data> Vec3Types; // 0x20
    }; // 0x28
    static_assert(sizeof(Vec3ListAsset) == 0x28);
}
#pragma pack(pop)