// Object: BFUILegacyElementSlice9FillData
// ClassId: 164
// RuntimeId: 852
// TypeInfo: 0x0000000144D97810
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILegacyElementSlice9FillData : public Core::Asset {
        CString TextureId; // 0x20
        Int32 MarginTop; // 0x28
        Int32 MarginLeft; // 0x2C
        Int32 MarginRight; // 0x30
        Int32 MarginBottom; // 0x34
        Int32 ExpandTop; // 0x38
        Int32 ExpandLeft; // 0x3C
        Int32 ExpandRight; // 0x40
        Int32 ExpandBottom; // 0x44
        Float32 Scale; // 0x48
        Boolean TiledFill; // 0x4C
        Boolean FillCenter; // 0x4D
        char pad_0x4E[0x2];
    }; // 0x50
    static_assert(sizeof(BFUILegacyElementSlice9FillData) == 0x50);
}
#pragma pack(pop)