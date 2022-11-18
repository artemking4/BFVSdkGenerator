// Object: BFUITwinkleTextureElementEntityData
// ClassId: 3679
// RuntimeId: 17222
// TypeInfo: 0x0000000144D41750
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUITwinkleTextureElementEntityData : public CasablancaShared::BFUIElementEntityData {
        CString TextureUrl; // 0x130
        CString TextureAtlas; // 0x138
        Uint32 GenMipmapCount; // 0x140
        char pad_0x144[0xC];
    }; // 0x150
    static_assert(sizeof(BFUITwinkleTextureElementEntityData) == 0x150);
}
#pragma pack(pop)