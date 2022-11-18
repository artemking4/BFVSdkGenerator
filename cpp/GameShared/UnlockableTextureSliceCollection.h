// Object: UnlockableTextureSliceCollection
// ClassId: 5559
// RuntimeId: 48381
// TypeInfo: 0x0000000144E818C0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../GameShared/TextureSliceUnlockPartData.h"

#pragma pack(push, 8)
namespace GameShared {
    class UnlockableTextureSliceCollection : public Core::DataContainer {
        Int32 DefaultValue; // 0x18
        char pad_0x1C[0x4];
        Array<GameShared::TextureSliceUnlockPartData> PossibleValues; // 0x20
    }; // 0x28
    static_assert(sizeof(UnlockableTextureSliceCollection) == 0x28);
}
#pragma pack(pop)