while (Get-Process -Name "FuchsiaProject.exe" -ErrorAction SilentlyContinue) {
    Start-Sleep -Seconds 1
}
while ($true) {
    Write-Host "RETURNED CDMB."
    $targetProcess = Start-Process -FilePath "MainCodePanic.exe -returned:CDMB" -Wait - NoNewWindow -Passthru
    $targetProcess.WaitForExit()
    $exitCode = $targetProcess.ExitCode
    Write-Host "exter"
    if ($exitCode -eq 99) {
        Write-Host "rebooting..."
        Restart-Computer -Force
    }
    elseif ($exitCode -eq 98) {
        Write-Host "restarting..."
        $CDMB = Start-Process -FilePath "FuchsiaProject.exe"
        $CDMB.WaitForExit()
    }
    #else {
        #exit
    #}
}