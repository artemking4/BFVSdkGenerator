// Object: QuickscopeBudgetsAsset
// ClassId: 677
// RuntimeId: 32933
// TypeInfo: 0x0000000144F14D00
#include "../Core/Asset.h"
#include "../QuickscopeShared/QuickscopeBudgetEntry.h"
#include "../QuickscopeShared/QuickscopePlatformValue.h"

#pragma pack(push, 8)
namespace QuickscopeShared {
    class QuickscopeBudgetsAsset : public Core::Asset {
        Array<QuickscopeShared::QuickscopeBudgetEntry> Entries; // 0x20
        Array<QuickscopeShared::QuickscopePlatformValue> ResolutionTargets; // 0x28
    }; // 0x30
    static_assert(sizeof(QuickscopeBudgetsAsset) == 0x30);
}
#pragma pack(pop)