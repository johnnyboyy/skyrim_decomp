// Source exposure: mixed (community declarations and the contributor-owned pack).
// Code origin: declarations from CommonLibSSE-NG (GRefCountImplCore, GRefCountNTSImpl), reduced to the members used here.
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// GRefCountImplCore, GRefCountImplCore::~GRefCountImplCore, _refCount, _pad0C: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// GRefCountNTSImpl, GRefCountNTSImpl::Release: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// GRefCountNTSImpl::Release: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>
#include <cstddef>

class GRefCountImplCore
{
public:
    virtual ~GRefCountImplCore();  // 00

protected:
    volatile std::uint32_t _refCount;  // 08
    std::uint32_t _pad0C;  // 0C
};
static_assert(sizeof(GRefCountImplCore) == 0x10, "GRefCountImplCore size");

class GRefCountNTSImpl : public GRefCountImplCore
{
public:
    void Release();
};
static_assert(sizeof(GRefCountNTSImpl) == 0x10, "GRefCountNTSImpl size");
