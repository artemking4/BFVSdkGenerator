// Object: TextureSliceUnlockPartData
// ClassId: 5166
// RuntimeId: 36178
// TypeInfo: 0x0000000144E81AC0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class TextureSliceUnlockPartData : public Core::DataContainer {
        Int32 SliceIndex; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(TextureSliceUnlockPartData) == 0x20);
}
#pragma pack(pop)