// Object: FootprintSize
// ClassId: 5282
// RuntimeId: 22757
// TypeInfo: 0x0000000144D0A1B0
#include "../CasablancaShared/FootprintNodeBase.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class FootprintSize : public CasablancaShared::FootprintNodeBase {
        char pad_0x28[0x8];
        Core::Vec3 Dimensions; // 0x30
    }; // 0x40
    static_assert(sizeof(FootprintSize) == 0x40);
}
#pragma pack(pop)