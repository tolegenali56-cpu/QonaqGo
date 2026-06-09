<!doctype html>
<html lang="ru">
<head>
  <meta charset="utf-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1" />
  <title>QonaqGo Travel Marketplace</title>
  <style>
    :root {
      --ink: #15201d;
      --muted: #64736f;
      --line: #d8e1de;
      --paper: #f6f8f7;
      --brand: #0f8b6f;
      --brand-dark: #12352f;
      --accent: #d43f3a;
    }

    * { box-sizing: border-box; }

    body {
      margin: 0;
      background: var(--paper);
      color: var(--ink);
      font-family: Inter, Arial, sans-serif;
    }

    a { color: inherit; text-decoration: none; }

    header {
      position: sticky;
      top: 0;
      z-index: 10;
      border-bottom: 1px solid var(--line);
      background: rgba(255, 255, 255, .96);
      backdrop-filter: blur(10px);
    }

    .header-inner {
      width: min(1280px, calc(100% - 32px));
      margin: 0 auto;
      display: flex;
      align-items: center;
      justify-content: space-between;
      gap: 18px;
      padding: 10px 0;
    }

    .brand {
      display: inline-flex;
      align-items: center;
      gap: 10px;
      font-size: 22px;
      font-weight: 900;
      white-space: nowrap;
    }

    .logo {
      display: grid;
      width: 42px;
      height: 42px;
      place-items: center;
      border-radius: 8px;
      background: var(--brand-dark);
      color: white;
      font-weight: 900;
    }

    nav {
      display: flex;
      flex: 1;
      justify-content: center;
      gap: 12px;
      white-space: nowrap;
      font-size: 14px;
      font-weight: 800;
    }

    nav a {
      display: inline-flex;
      min-height: 38px;
      align-items: center;
      border-radius: 6px;
      padding: 0 7px;
    }

    nav a:hover { background: rgba(15, 139, 111, .09); }

    .actions {
      display: flex;
      align-items: center;
      gap: 10px;
    }

    .lang-switch {
      display: inline-flex;
      overflow: hidden;
      border: 1px solid var(--line);
      border-radius: 6px;
      background: white;
    }
