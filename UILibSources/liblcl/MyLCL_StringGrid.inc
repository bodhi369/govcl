
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function StringGrid_Create(AOwner: TComponent): TStringGrid; extdecl;
begin
  Result :=  TStringGrid.Create(AOwner);
end;

procedure StringGrid_Free(AObj: TStringGrid); extdecl;
begin
  AObj.Free;
end;

procedure StringGrid_CellRect(AObj: TStringGrid; ACol: Integer; ARow: Integer; var Result: TRect); extdecl;
begin
  Result :=  AObj.CellRect(ACol, ARow);
end;

procedure StringGrid_MouseToCell(AObj: TStringGrid; X: Integer; Y: Integer; var ACol: Integer; var ARow: Integer); extdecl;
begin
  AObj.MouseToCell(X, Y, ACol, ARow);
end;

procedure StringGrid_MouseCoord(AObj: TStringGrid; X: Integer; Y: Integer; var Result: TGridCoord); extdecl;
begin
  Result :=  AObj.MouseCoord(X, Y);
end;

function StringGrid_CanFocus(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

function StringGrid_ContainsControl(AObj: TStringGrid; Control: TControl): LongBool; extdecl;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function StringGrid_ControlAtPos(AObj: TStringGrid; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
end;

procedure StringGrid_DisableAlign(AObj: TStringGrid); extdecl;
begin
  AObj.DisableAlign;
end;

procedure StringGrid_EnableAlign(AObj: TStringGrid); extdecl;
begin
  AObj.EnableAlign;
end;

function StringGrid_FindChildControl(AObj: TStringGrid; ControlName: PChar): TControl; extdecl;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure StringGrid_FlipChildren(AObj: TStringGrid; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function StringGrid_Focused(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function StringGrid_HandleAllocated(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure StringGrid_InsertControl(AObj: TStringGrid; AControl: TControl); extdecl;
begin
  AObj.InsertControl(AControl);
end;

procedure StringGrid_Invalidate(AObj: TStringGrid); extdecl;
begin
  AObj.Invalidate;
end;

procedure StringGrid_RemoveControl(AObj: TStringGrid; AControl: TControl); extdecl;
begin
  AObj.RemoveControl(AControl);
end;

procedure StringGrid_Realign(AObj: TStringGrid); extdecl;
begin
  AObj.Realign;
end;

procedure StringGrid_Repaint(AObj: TStringGrid); extdecl;
begin
  AObj.Repaint;
end;

procedure StringGrid_ScaleBy(AObj: TStringGrid; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure StringGrid_ScrollBy(AObj: TStringGrid; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure StringGrid_SetBounds(AObj: TStringGrid; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure StringGrid_SetFocus(AObj: TStringGrid); extdecl;
begin
  AObj.SetFocus;
end;

procedure StringGrid_Update(AObj: TStringGrid); extdecl;
begin
  AObj.Update;
end;

procedure StringGrid_BringToFront(AObj: TStringGrid); extdecl;
begin
  AObj.BringToFront;
end;

procedure StringGrid_ClientToScreen(AObj: TStringGrid; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure StringGrid_ClientToParent(AObj: TStringGrid; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function StringGrid_Dragging(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function StringGrid_HasParent(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure StringGrid_Hide(AObj: TStringGrid); extdecl;
begin
  AObj.Hide;
end;

function StringGrid_Perform(AObj: TStringGrid; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure StringGrid_Refresh(AObj: TStringGrid); extdecl;
begin
  AObj.Refresh;
end;

procedure StringGrid_ScreenToClient(AObj: TStringGrid; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure StringGrid_ParentToClient(AObj: TStringGrid; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure StringGrid_SendToBack(AObj: TStringGrid); extdecl;
begin
  AObj.SendToBack;
end;

procedure StringGrid_Show(AObj: TStringGrid); extdecl;
begin
  AObj.Show;
end;

function StringGrid_GetTextBuf(AObj: TStringGrid; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function StringGrid_GetTextLen(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

procedure StringGrid_SetTextBuf(AObj: TStringGrid; Buffer: PChar); extdecl;
begin
  AObj.SetTextBuf(Buffer);
end;

function StringGrid_FindComponent(AObj: TStringGrid; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function StringGrid_GetNamePath(AObj: TStringGrid): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure StringGrid_Assign(AObj: TStringGrid; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function StringGrid_ClassType(AObj: TStringGrid): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function StringGrid_ClassName(AObj: TStringGrid): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function StringGrid_InstanceSize(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function StringGrid_InheritsFrom(AObj: TStringGrid; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function StringGrid_Equals(AObj: TStringGrid; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function StringGrid_GetHashCode(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function StringGrid_ToString(AObj: TStringGrid): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function StringGrid_GetAlign(AObj: TStringGrid): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure StringGrid_SetAlign(AObj: TStringGrid; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function StringGrid_GetAnchors(AObj: TStringGrid): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure StringGrid_SetAnchors(AObj: TStringGrid; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function StringGrid_GetBiDiMode(AObj: TStringGrid): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure StringGrid_SetBiDiMode(AObj: TStringGrid; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

function StringGrid_GetBorderStyle(AObj: TStringGrid): TBorderStyle; extdecl;
begin
  Result :=  AObj.BorderStyle;
end;

procedure StringGrid_SetBorderStyle(AObj: TStringGrid; AValue: TBorderStyle); extdecl;
begin
  AObj.BorderStyle := AValue;
end;

function StringGrid_GetColor(AObj: TStringGrid): TColor; extdecl;
begin
  Result :=  AObj.Color;
end;

procedure StringGrid_SetColor(AObj: TStringGrid; AValue: TColor); extdecl;
begin
  AObj.Color := AValue;
end;

function StringGrid_GetColCount(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.ColCount;
end;

procedure StringGrid_SetColCount(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.ColCount := AValue;
end;

function StringGrid_GetDefaultColWidth(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.DefaultColWidth;
end;

procedure StringGrid_SetDefaultColWidth(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.DefaultColWidth := AValue;
end;

function StringGrid_GetDefaultRowHeight(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.DefaultRowHeight;
end;

procedure StringGrid_SetDefaultRowHeight(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.DefaultRowHeight := AValue;
end;

function StringGrid_GetDefaultDrawing(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.DefaultDrawing;
end;

procedure StringGrid_SetDefaultDrawing(AObj: TStringGrid; AValue: LongBool); extdecl;
begin
  AObj.DefaultDrawing := AValue;
end;

function StringGrid_GetDoubleBuffered(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure StringGrid_SetDoubleBuffered(AObj: TStringGrid; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function StringGrid_GetDragCursor(AObj: TStringGrid): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure StringGrid_SetDragCursor(AObj: TStringGrid; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function StringGrid_GetDragKind(AObj: TStringGrid): TDragKind; extdecl;
begin
  Result :=  AObj.DragKind;
end;

procedure StringGrid_SetDragKind(AObj: TStringGrid; AValue: TDragKind); extdecl;
begin
  AObj.DragKind := AValue;
end;

function StringGrid_GetDragMode(AObj: TStringGrid): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure StringGrid_SetDragMode(AObj: TStringGrid; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function StringGrid_GetEnabled(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure StringGrid_SetEnabled(AObj: TStringGrid; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function StringGrid_GetFixedColor(AObj: TStringGrid): TColor; extdecl;
begin
  Result :=  AObj.FixedColor;
end;

procedure StringGrid_SetFixedColor(AObj: TStringGrid; AValue: TColor); extdecl;
begin
  AObj.FixedColor := AValue;
end;

function StringGrid_GetFixedCols(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.FixedCols;
end;

procedure StringGrid_SetFixedCols(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.FixedCols := AValue;
end;

function StringGrid_GetRowCount(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.RowCount;
end;

procedure StringGrid_SetRowCount(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.RowCount := AValue;
end;

function StringGrid_GetFixedRows(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.FixedRows;
end;

procedure StringGrid_SetFixedRows(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.FixedRows := AValue;
end;

function StringGrid_GetFont(AObj: TStringGrid): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure StringGrid_SetFont(AObj: TStringGrid; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function StringGrid_GetGridLineWidth(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.GridLineWidth;
end;

procedure StringGrid_SetGridLineWidth(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.GridLineWidth := AValue;
end;

function StringGrid_GetOptions(AObj: TStringGrid): TGridOptions; extdecl;
begin
  Result :=  AObj.Options;
end;

procedure StringGrid_SetOptions(AObj: TStringGrid; AValue: TGridOptions); extdecl;
begin
  AObj.Options := AValue;
end;

function StringGrid_GetParentColor(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure StringGrid_SetParentColor(AObj: TStringGrid; AValue: LongBool); extdecl;
begin
  AObj.ParentColor := AValue;
end;

function StringGrid_GetParentDoubleBuffered(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure StringGrid_SetParentDoubleBuffered(AObj: TStringGrid; AValue: LongBool); extdecl;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function StringGrid_GetParentFont(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure StringGrid_SetParentFont(AObj: TStringGrid; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function StringGrid_GetParentShowHint(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure StringGrid_SetParentShowHint(AObj: TStringGrid; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function StringGrid_GetPopupMenu(AObj: TStringGrid): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure StringGrid_SetPopupMenu(AObj: TStringGrid; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function StringGrid_GetScrollBars(AObj: TStringGrid): TScrollStyle; extdecl;
begin
  Result :=  AObj.ScrollBars;
end;

procedure StringGrid_SetScrollBars(AObj: TStringGrid; AValue: TScrollStyle); extdecl;
begin
  AObj.ScrollBars := AValue;
end;

function StringGrid_GetShowHint(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure StringGrid_SetShowHint(AObj: TStringGrid; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function StringGrid_GetTabOrder(AObj: TStringGrid): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure StringGrid_SetTabOrder(AObj: TStringGrid; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function StringGrid_GetVisible(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure StringGrid_SetVisible(AObj: TStringGrid; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

function StringGrid_GetVisibleColCount(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.VisibleColCount;
end;

function StringGrid_GetVisibleRowCount(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.VisibleRowCount;
end;

procedure StringGrid_SetOnClick(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnClick}
  {$DEFINE EventMethodName := OnClick}
  EventMethodCode
end;

procedure StringGrid_SetOnColumnMoved(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnColRowMoved}
  {$DEFINE EventMethodName := OnColumnMoved}
  EventMethodCode
end;

procedure StringGrid_SetOnContextPopup(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnContextPopup}
  {$DEFINE EventMethodName := OnContextPopup}
  EventMethodCode
end;

procedure StringGrid_SetOnDblClick(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDblClick}
  {$DEFINE EventMethodName := OnDblClick}
  EventMethodCode
end;

procedure StringGrid_SetOnDragDrop(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragDrop}
  {$DEFINE EventMethodName := OnDragDrop}
  EventMethodCode
end;

procedure StringGrid_SetOnDragOver(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragOver}
  {$DEFINE EventMethodName := OnDragOver}
  EventMethodCode
end;

procedure StringGrid_SetOnDrawCell(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDrawCell}
  {$DEFINE EventMethodName := OnDrawCell}
  EventMethodCode
end;

procedure StringGrid_SetOnEndDock(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDock}
  {$DEFINE EventMethodName := OnEndDock}
  EventMethodCode
end;

procedure StringGrid_SetOnEndDrag(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDrag}
  {$DEFINE EventMethodName := OnEndDrag}
  EventMethodCode
end;

procedure StringGrid_SetOnEnter(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEnter}
  {$DEFINE EventMethodName := OnEnter}
  EventMethodCode
end;

procedure StringGrid_SetOnExit(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnExit}
  {$DEFINE EventMethodName := OnExit}
  EventMethodCode
end;

procedure StringGrid_SetOnGetEditMask(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnGetEditMask}
  {$DEFINE EventMethodName := OnGetEditMask}
  EventMethodCode
end;

procedure StringGrid_SetOnGetEditText(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnGetEditText}
  {$DEFINE EventMethodName := OnGetEditText}
  EventMethodCode
end;

procedure StringGrid_SetOnKeyDown(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyDown}
  {$DEFINE EventMethodName := OnKeyDown}
  EventMethodCode
end;

procedure StringGrid_SetOnKeyPress(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyPress}
  {$DEFINE EventMethodName := OnKeyPress}
  EventMethodCode
end;

procedure StringGrid_SetOnKeyUp(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyUp}
  {$DEFINE EventMethodName := OnKeyUp}
  EventMethodCode
end;

procedure StringGrid_SetOnMouseDown(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseDown}
  {$DEFINE EventMethodName := OnMouseDown}
  EventMethodCode
end;

procedure StringGrid_SetOnMouseEnter(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseEnter}
  {$DEFINE EventMethodName := OnMouseEnter}
  EventMethodCode
end;

procedure StringGrid_SetOnMouseLeave(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseLeave}
  {$DEFINE EventMethodName := OnMouseLeave}
  EventMethodCode
end;

procedure StringGrid_SetOnMouseMove(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseMove}
  {$DEFINE EventMethodName := OnMouseMove}
  EventMethodCode
end;

procedure StringGrid_SetOnMouseUp(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseUp}
  {$DEFINE EventMethodName := OnMouseUp}
  EventMethodCode
end;

procedure StringGrid_SetOnMouseWheelDown(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseWheelDown}
  {$DEFINE EventMethodName := OnMouseWheelDown}
  EventMethodCode
end;

procedure StringGrid_SetOnMouseWheelUp(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseWheelUp}
  {$DEFINE EventMethodName := OnMouseWheelUp}
  EventMethodCode
end;

procedure StringGrid_SetOnRowMoved(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnColRowMoved}
  {$DEFINE EventMethodName := OnRowMoved}
  EventMethodCode
end;

procedure StringGrid_SetOnSelectCell(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnSelectCell}
  {$DEFINE EventMethodName := OnSelectCell}
  EventMethodCode
end;

procedure StringGrid_SetOnSetEditText(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnSetEditText}
  {$DEFINE EventMethodName := OnSetEditText}
  EventMethodCode
end;

procedure StringGrid_SetOnStartDock(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnStartDock}
  {$DEFINE EventMethodName := OnStartDock}
  EventMethodCode
end;

procedure StringGrid_SetOnTopLeftChanged(AObj: TStringGrid; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnTopLeftChanged}
  {$DEFINE EventMethodName := OnTopLeftChanged}
  EventMethodCode
end;

function StringGrid_GetCanvas(AObj: TStringGrid): TCanvas; extdecl;
begin
  Result :=  AObj.Canvas;
end;

function StringGrid_GetCol(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.Col;
end;

procedure StringGrid_SetCol(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.Col := AValue;
end;

function StringGrid_GetEditorMode(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.EditorMode;
end;

procedure StringGrid_SetEditorMode(AObj: TStringGrid; AValue: LongBool); extdecl;
begin
  AObj.EditorMode := AValue;
end;

function StringGrid_GetGridHeight(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.GridHeight;
end;

function StringGrid_GetGridWidth(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.GridWidth;
end;

function StringGrid_GetLeftCol(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.LeftCol;
end;

procedure StringGrid_SetLeftCol(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.LeftCol := AValue;
end;

procedure StringGrid_GetSelection(AObj: TStringGrid; var Result: TGridRect); extdecl;
begin
  Result :=  AObj.Selection;
end;

procedure StringGrid_SetSelection(AObj: TStringGrid; var AValue: TGridRect); extdecl;
begin
  AObj.Selection := AValue;
end;

function StringGrid_GetRow(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.Row;
end;

procedure StringGrid_SetRow(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.Row := AValue;
end;

function StringGrid_GetTopRow(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.TopRow;
end;

procedure StringGrid_SetTopRow(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.TopRow := AValue;
end;

function StringGrid_GetTabStop(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure StringGrid_SetTabStop(AObj: TStringGrid; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function StringGrid_GetDockClientCount(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.DockClientCount;
end;

function StringGrid_GetDockSite(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure StringGrid_SetDockSite(AObj: TStringGrid; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function StringGrid_GetMouseInClient(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.MouseInClient;
end;

function StringGrid_GetVisibleDockClientCount(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function StringGrid_GetBrush(AObj: TStringGrid): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function StringGrid_GetControlCount(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function StringGrid_GetHandle(AObj: TStringGrid): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function StringGrid_GetParentWindow(AObj: TStringGrid): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure StringGrid_SetParentWindow(AObj: TStringGrid; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function StringGrid_GetUseDockManager(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure StringGrid_SetUseDockManager(AObj: TStringGrid; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

function StringGrid_GetAction(AObj: TStringGrid): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure StringGrid_SetAction(AObj: TStringGrid; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

procedure StringGrid_GetBoundsRect(AObj: TStringGrid; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure StringGrid_SetBoundsRect(AObj: TStringGrid; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function StringGrid_GetClientHeight(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure StringGrid_SetClientHeight(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure StringGrid_GetClientOrigin(AObj: TStringGrid; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure StringGrid_GetClientRect(AObj: TStringGrid; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function StringGrid_GetClientWidth(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure StringGrid_SetClientWidth(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function StringGrid_GetControlState(AObj: TStringGrid): TControlState; extdecl;
begin
  Result :=  AObj.ControlState;
end;

procedure StringGrid_SetControlState(AObj: TStringGrid; AValue: TControlState); extdecl;
begin
  AObj.ControlState := AValue;
end;

function StringGrid_GetControlStyle(AObj: TStringGrid): TControlStyle; extdecl;
begin
  Result :=  AObj.ControlStyle;
end;

procedure StringGrid_SetControlStyle(AObj: TStringGrid; AValue: TControlStyle); extdecl;
begin
  AObj.ControlStyle := AValue;
end;

function StringGrid_GetFloating(AObj: TStringGrid): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function StringGrid_GetParent(AObj: TStringGrid): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure StringGrid_SetParent(AObj: TStringGrid; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function StringGrid_GetLeft(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure StringGrid_SetLeft(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function StringGrid_GetTop(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure StringGrid_SetTop(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function StringGrid_GetWidth(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure StringGrid_SetWidth(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function StringGrid_GetHeight(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure StringGrid_SetHeight(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function StringGrid_GetCursor(AObj: TStringGrid): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure StringGrid_SetCursor(AObj: TStringGrid; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function StringGrid_GetHint(AObj: TStringGrid): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure StringGrid_SetHint(AObj: TStringGrid; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function StringGrid_GetComponentCount(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function StringGrid_GetComponentIndex(AObj: TStringGrid): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure StringGrid_SetComponentIndex(AObj: TStringGrid; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function StringGrid_GetOwner(AObj: TStringGrid): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function StringGrid_GetName(AObj: TStringGrid): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure StringGrid_SetName(AObj: TStringGrid; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function StringGrid_GetTag(AObj: TStringGrid): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure StringGrid_SetTag(AObj: TStringGrid; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function StringGrid_GetCells(AObj: TStringGrid; ACol: Integer; ARow: Integer): PChar; extdecl;
begin
  Result :=  PChar(AObj.Cells[ACol, ARow]);
end;

procedure StringGrid_SetCells(AObj: TStringGrid; ACol: Integer; ARow: Integer; AValue: PChar); extdecl;
begin
  AObj.Cells[ACol, ARow] := AValue;
end;

function StringGrid_GetCols(AObj: TStringGrid; Index: Integer): TStrings; extdecl;
begin
  Result :=  AObj.Cols[Index];
end;

procedure StringGrid_SetCols(AObj: TStringGrid; Index: Integer; AValue: TStrings); extdecl;
begin
  AObj.Cols[Index] := AValue;
end;

function StringGrid_GetObjects(AObj: TStringGrid; ACol: Integer; ARow: Integer): TObject; extdecl;
begin
  Result :=  AObj.Objects[ACol, ARow];
end;

procedure StringGrid_SetObjects(AObj: TStringGrid; ACol: Integer; ARow: Integer; AValue: TObject); extdecl;
begin
  AObj.Objects[ACol, ARow] := AValue;
end;

function StringGrid_GetRows(AObj: TStringGrid; Index: Integer): TStrings; extdecl;
begin
  Result :=  AObj.Rows[Index];
end;

procedure StringGrid_SetRows(AObj: TStringGrid; Index: Integer; AValue: TStrings); extdecl;
begin
  AObj.Rows[Index] := AValue;
end;

function StringGrid_GetColWidths(AObj: TStringGrid; Index: Integer): Integer; extdecl;
begin
  Result :=  AObj.ColWidths[Index];
end;

procedure StringGrid_SetColWidths(AObj: TStringGrid; Index: Integer; AValue: Integer); extdecl;
begin
  AObj.ColWidths[Index] := AValue;
end;

function StringGrid_GetRowHeights(AObj: TStringGrid; Index: Integer): Integer; extdecl;
begin
  Result :=  AObj.RowHeights[Index];
end;

procedure StringGrid_SetRowHeights(AObj: TStringGrid; Index: Integer; AValue: Integer); extdecl;
begin
  AObj.RowHeights[Index] := AValue;
end;

function StringGrid_GetDockClients(AObj: TStringGrid; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.DockClients[Index];
end;

function StringGrid_GetControls(AObj: TStringGrid; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function StringGrid_GetComponents(AObj: TStringGrid; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function StringGrid_StaticClassType: TClass; extdecl;
begin
  Result := TStringGrid;
end;

exports
  StringGrid_Create,
  StringGrid_Free,
  StringGrid_CellRect,
  StringGrid_MouseToCell,
  StringGrid_MouseCoord,
  StringGrid_CanFocus,
  StringGrid_ContainsControl,
  StringGrid_ControlAtPos,
  StringGrid_DisableAlign,
  StringGrid_EnableAlign,
  StringGrid_FindChildControl,
  StringGrid_FlipChildren,
  StringGrid_Focused,
  StringGrid_HandleAllocated,
  StringGrid_InsertControl,
  StringGrid_Invalidate,
  StringGrid_RemoveControl,
  StringGrid_Realign,
  StringGrid_Repaint,
  StringGrid_ScaleBy,
  StringGrid_ScrollBy,
  StringGrid_SetBounds,
  StringGrid_SetFocus,
  StringGrid_Update,
  StringGrid_BringToFront,
  StringGrid_ClientToScreen,
  StringGrid_ClientToParent,
  StringGrid_Dragging,
  StringGrid_HasParent,
  StringGrid_Hide,
  StringGrid_Perform,
  StringGrid_Refresh,
  StringGrid_ScreenToClient,
  StringGrid_ParentToClient,
  StringGrid_SendToBack,
  StringGrid_Show,
  StringGrid_GetTextBuf,
  StringGrid_GetTextLen,
  StringGrid_SetTextBuf,
  StringGrid_FindComponent,
  StringGrid_GetNamePath,
  StringGrid_Assign,
  StringGrid_ClassType,
  StringGrid_ClassName,
  StringGrid_InstanceSize,
  StringGrid_InheritsFrom,
  StringGrid_Equals,
  StringGrid_GetHashCode,
  StringGrid_ToString,
  StringGrid_GetAlign,
  StringGrid_SetAlign,
  StringGrid_GetAnchors,
  StringGrid_SetAnchors,
  StringGrid_GetBiDiMode,
  StringGrid_SetBiDiMode,
  StringGrid_GetBorderStyle,
  StringGrid_SetBorderStyle,
  StringGrid_GetColor,
  StringGrid_SetColor,
  StringGrid_GetColCount,
  StringGrid_SetColCount,
  StringGrid_GetDefaultColWidth,
  StringGrid_SetDefaultColWidth,
  StringGrid_GetDefaultRowHeight,
  StringGrid_SetDefaultRowHeight,
  StringGrid_GetDefaultDrawing,
  StringGrid_SetDefaultDrawing,
  StringGrid_GetDoubleBuffered,
  StringGrid_SetDoubleBuffered,
  StringGrid_GetDragCursor,
  StringGrid_SetDragCursor,
  StringGrid_GetDragKind,
  StringGrid_SetDragKind,
  StringGrid_GetDragMode,
  StringGrid_SetDragMode,
  StringGrid_GetEnabled,
  StringGrid_SetEnabled,
  StringGrid_GetFixedColor,
  StringGrid_SetFixedColor,
  StringGrid_GetFixedCols,
  StringGrid_SetFixedCols,
  StringGrid_GetRowCount,
  StringGrid_SetRowCount,
  StringGrid_GetFixedRows,
  StringGrid_SetFixedRows,
  StringGrid_GetFont,
  StringGrid_SetFont,
  StringGrid_GetGridLineWidth,
  StringGrid_SetGridLineWidth,
  StringGrid_GetOptions,
  StringGrid_SetOptions,
  StringGrid_GetParentColor,
  StringGrid_SetParentColor,
  StringGrid_GetParentDoubleBuffered,
  StringGrid_SetParentDoubleBuffered,
  StringGrid_GetParentFont,
  StringGrid_SetParentFont,
  StringGrid_GetParentShowHint,
  StringGrid_SetParentShowHint,
  StringGrid_GetPopupMenu,
  StringGrid_SetPopupMenu,
  StringGrid_GetScrollBars,
  StringGrid_SetScrollBars,
  StringGrid_GetShowHint,
  StringGrid_SetShowHint,
  StringGrid_GetTabOrder,
  StringGrid_SetTabOrder,
  StringGrid_GetVisible,
  StringGrid_SetVisible,
  StringGrid_GetVisibleColCount,
  StringGrid_GetVisibleRowCount,
  StringGrid_SetOnClick,
  StringGrid_SetOnColumnMoved,
  StringGrid_SetOnContextPopup,
  StringGrid_SetOnDblClick,
  StringGrid_SetOnDragDrop,
  StringGrid_SetOnDragOver,
  StringGrid_SetOnDrawCell,
  StringGrid_SetOnEndDock,
  StringGrid_SetOnEndDrag,
  StringGrid_SetOnEnter,
  StringGrid_SetOnExit,
  StringGrid_SetOnGetEditMask,
  StringGrid_SetOnGetEditText,
  StringGrid_SetOnKeyDown,
  StringGrid_SetOnKeyPress,
  StringGrid_SetOnKeyUp,
  StringGrid_SetOnMouseDown,
  StringGrid_SetOnMouseEnter,
  StringGrid_SetOnMouseLeave,
  StringGrid_SetOnMouseMove,
  StringGrid_SetOnMouseUp,
  StringGrid_SetOnMouseWheelDown,
  StringGrid_SetOnMouseWheelUp,
  StringGrid_SetOnRowMoved,
  StringGrid_SetOnSelectCell,
  StringGrid_SetOnSetEditText,
  StringGrid_SetOnStartDock,
  StringGrid_SetOnTopLeftChanged,
  StringGrid_GetCanvas,
  StringGrid_GetCol,
  StringGrid_SetCol,
  StringGrid_GetEditorMode,
  StringGrid_SetEditorMode,
  StringGrid_GetGridHeight,
  StringGrid_GetGridWidth,
  StringGrid_GetLeftCol,
  StringGrid_SetLeftCol,
  StringGrid_GetSelection,
  StringGrid_SetSelection,
  StringGrid_GetRow,
  StringGrid_SetRow,
  StringGrid_GetTopRow,
  StringGrid_SetTopRow,
  StringGrid_GetTabStop,
  StringGrid_SetTabStop,
  StringGrid_GetDockClientCount,
  StringGrid_GetDockSite,
  StringGrid_SetDockSite,
  StringGrid_GetMouseInClient,
  StringGrid_GetVisibleDockClientCount,
  StringGrid_GetBrush,
  StringGrid_GetControlCount,
  StringGrid_GetHandle,
  StringGrid_GetParentWindow,
  StringGrid_SetParentWindow,
  StringGrid_GetUseDockManager,
  StringGrid_SetUseDockManager,
  StringGrid_GetAction,
  StringGrid_SetAction,
  StringGrid_GetBoundsRect,
  StringGrid_SetBoundsRect,
  StringGrid_GetClientHeight,
  StringGrid_SetClientHeight,
  StringGrid_GetClientOrigin,
  StringGrid_GetClientRect,
  StringGrid_GetClientWidth,
  StringGrid_SetClientWidth,
  StringGrid_GetControlState,
  StringGrid_SetControlState,
  StringGrid_GetControlStyle,
  StringGrid_SetControlStyle,
  StringGrid_GetFloating,
  StringGrid_GetParent,
  StringGrid_SetParent,
  StringGrid_GetLeft,
  StringGrid_SetLeft,
  StringGrid_GetTop,
  StringGrid_SetTop,
  StringGrid_GetWidth,
  StringGrid_SetWidth,
  StringGrid_GetHeight,
  StringGrid_SetHeight,
  StringGrid_GetCursor,
  StringGrid_SetCursor,
  StringGrid_GetHint,
  StringGrid_SetHint,
  StringGrid_GetComponentCount,
  StringGrid_GetComponentIndex,
  StringGrid_SetComponentIndex,
  StringGrid_GetOwner,
  StringGrid_GetName,
  StringGrid_SetName,
  StringGrid_GetTag,
  StringGrid_SetTag,
  StringGrid_GetCells,
  StringGrid_SetCells,
  StringGrid_GetCols,
  StringGrid_SetCols,
  StringGrid_GetObjects,
  StringGrid_SetObjects,
  StringGrid_GetRows,
  StringGrid_SetRows,
  StringGrid_GetColWidths,
  StringGrid_SetColWidths,
  StringGrid_GetRowHeights,
  StringGrid_SetRowHeights,
  StringGrid_GetDockClients,
  StringGrid_GetControls,
  StringGrid_GetComponents,
  StringGrid_StaticClassType;

